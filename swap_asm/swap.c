#include <stdio.h>

void swap_asm(int *a, int *b);
void set_asm(int *a, int b); // sets the value that a points to to b

int main(){
  int a = 100;
  int b = 200;
  int c = 0;
  printf("a = %d, b = %d\n",a,b);
  swap_asm(&a,&b);
  printf("a = %d, b = %d\n",a,b);
  set_asm(&c, 300);
  printf("c = %d\n", c);

  return 0;
}
