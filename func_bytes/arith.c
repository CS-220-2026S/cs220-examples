#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <sys/mman.h>
#include <unistd.h>

#define SIZE 1024

char buffer[SIZE+4096];

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

  int a = 5;
  int b = -12;
  
  // TODO: Write a function in assembly that will
  // add two operands and return the sum.
  // Write the machine code in raw bytes to the
  // RWX part of memory, and make a function
  // pointer to it. Invoke as "func(a,b)" and
  // print the result
  
  return 0;
}
