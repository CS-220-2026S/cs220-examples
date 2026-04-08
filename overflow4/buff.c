#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <sys/mman.h>
#include <unistd.h>

#define SIZE 1024

char buffer[SIZE+4096];
int  num = 0x12345678; // TODO: craft an input to change this to 0x90abcdef

void getString(char *retBuffer) {
  char buffer[41];	
  if (gets(buffer)) {
    memcpy(retBuffer,buffer,sizeof(buffer));
    printf("Message: %s\n", retBuffer);
  }
}
  
int main(){
  long page_size = sysconf(_SC_PAGESIZE);
  // cast so we can perform bitwise operations
  uintptr_t buffPtr = (uintptr_t) buffer;
  // align address to next page boundary 
  uintptr_t aligned_buffPtr = (buffPtr + page_size - 1) & ~(page_size - 1);
  // set protections on aligned address
  void *execBuff = (void *) aligned_buffPtr; 
  if(mprotect(execBuff, SIZE, PROT_READ|PROT_EXEC|PROT_WRITE)) {
    printf("mprotect failed\n");
    return 1;
  }
  int a = 100;
  int b = 200;
  getString(execBuff);
  if (num == 0x90abcdef){
    printf("%d + %d = %d\n",a,b,a+b);
  }
  else {
    printf("failed to change num\n");
    return 1;
  }
  return 0;
}
