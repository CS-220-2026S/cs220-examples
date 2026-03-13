#include <stdio.h>
#include <stdlib.h>

int gcd_asm(int a, int b); // take the greatest common divisor of a and b
int lcm_asm(int a, int b); // take the lowest common multiple of a and b

int main(int argc, char *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("gcd(%d,%d) = %d\n",a,b,gcd_asm(a,b));
  printf("lcm(%d,%d) = %d\n",a,b,lcm_asm(a,b));
  return 0;
}
