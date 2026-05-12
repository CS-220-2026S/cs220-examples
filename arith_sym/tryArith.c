#include <stdio.h>
#include <stdlib.h>

int add(int x, int y);
int sub(int x, int y);

static int a;
int b;

int main(int argc, char *argv[]){
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  printf("%d + %d = %d\n",a,b,add(a,b));
  printf("%d - %d = %d\n",a,b,sub(a,b));
  return 0;
}
