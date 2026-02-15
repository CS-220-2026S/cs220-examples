#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define PROD(m,n) m*n

int main(){
  int ary[SIZE];
  for (int i = 0; i < SIZE; i++){
    ary[i] = i+1;
  }
  for (int i = 0; i < SIZE; i++){
    // TODO: alter the array here
    printf("ary[%d] = %d\n", i, ary[i]);
  }
  return 0;
}
