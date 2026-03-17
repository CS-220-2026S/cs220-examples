#include <stdio.h>

#define NUM 7

int fact(int n);

int main(){
  for (int i = 0; i < NUM; i++){
    printf("fact(%d) = %d\n", i, fact(i));
  }
  return 0;
}

int fact(int n){
  if (n == 0 || n == 1) return 1;
  int prev = fact(n-1);
  int res = n * prev;
  return res;
}
