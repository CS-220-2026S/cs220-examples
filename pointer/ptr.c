#include <stdio.h>

int main(){
  int a = 3;
  int b = 5;
  int *p = &a; // type of p=int pointer
  printf("a = %d\n", a);
  printf("Address of a = %p\n", &a);
  printf("b = %d\n", b);
  printf("Address of b = %p\n", &b);
  printf("p = %p\n", p);
  printf("Address of p = %p\n", &p);
  *p = 6;
  printf("a = %d\n", a);
  return 0;
}
