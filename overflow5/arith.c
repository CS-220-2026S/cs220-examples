#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int add(int a, int b) {return a + b;}
int sub(int a, int b) {return a - b;}
int mul(int a, int b) {return a * b;}
int quo(int a, int b) {return a / b;}
int rem(int a, int b) {return a % b;}
int tar(int a, int b) {printf("target found!\n"); exit(0); return a + b;}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  char ops[] = {'+', '-', '*', '/', '%'};
  int (*funcs[])(int,int) = {add,sub,mul,quo,rem};
  // TODO: Craft a message that will overflow buf and overwrite
  // the address of the 'add' function in funcs with 'tar' 
  char buf[10] = {0};
  strcpy(buf, argv[3]);
  printf("message = %s\n", buf);
  for (int i=0; i < 5; i++){
    printf("%d %c %d = %d\n",a,ops[i],b, (*funcs[i])(a,b));
  }
  
  return 0;
}
