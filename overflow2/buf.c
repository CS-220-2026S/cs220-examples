#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num = 0x12345678;

void getMsg(char msg[]);

int main(){
  char msg[16];
  getMsg(msg);
  if (num == 0x12345678){
    printf("message = %s\n", msg);
  }
  else {
    printf("corruption detected, num = 0x%x\n", num);
  }
  return 0;
}

void getMsg(char msg[]){
  char buffer[16];
  printf("Enter your message here:\n");
  gets(buffer);
  strcpy(msg, buffer);
}
