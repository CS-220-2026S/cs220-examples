#include <stdio.h>
#include <stdlib.h>

int add_asm(int a, int b); // return sum of arguments a and b
int inc_asm(int a); // return a + 1
int pow_asm(int a, int b); // return a ** b
  
int main(int argc, char *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int res = add_asm(a,b);
  printf("sum of %d + %d = %d\n", a,b,res);
  printf("sum of (%d + %d) + 1 = %d\n", a,b,inc_asm(res));
  printf("power %d ** %d = %d\n", a,b,pow_asm(a,b));

  return 0;
}
