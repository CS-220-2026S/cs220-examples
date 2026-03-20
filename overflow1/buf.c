#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
  int num = 0x12345678;
  char msg[10];
  strcpy(msg,argv[1]);
  if (num == 0x12345678){
    printf("message = %s\n", msg);
  }
  else{
    printf("corruption detected, num = 0x%x\n", num);
  }
  return 0;
}
