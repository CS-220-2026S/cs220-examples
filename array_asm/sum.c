#include <stdio.h>
#include <stdlib.h>

int sum_asm(int ary[], int size);

int main(){
  int ary[6] = {2,3,7,-4,10,3};
  int sum = sum_asm(ary, 6);
  printf("sum = %d\n", sum);
  return 0;
}
