#include <stdio.h>
#include <stdlib.h>

int arith_asm(int a, int b, char op);

int main(){
  int a, b;
  char op;
  printf("Enter first operand:\n");
  scanf("%d", &a);
  printf("Enter second operand:\n");
  scanf("%d",&b);
  printf("Enter an operation (+, -):\n");
  scanf(" %c",&op);
  int res = arith_asm(a,b,op);
  printf("%d %c %d = %d\n",a,op,b,res);
  return 0;
}
