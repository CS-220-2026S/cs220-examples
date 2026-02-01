#include <stdio.h>

void swap(int *, int *);

int main(){
  int a = 100;
  int b = 200;
  printf("a = %d, b = %d\n",a,b);
  swap(&a,&b);
  printf("a = %d, b = %d\n",a,b);
  return 0;
}

void swap(int *aPtr, int *bPtr){
  // swap a and b
  int temp = *aPtr;
  *aPtr = *bPtr;
  *bPtr = temp;
}
