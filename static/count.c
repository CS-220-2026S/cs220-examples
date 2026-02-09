#include <stdio.h>
#include <stdlib.h>

void counter();

int main(){
  // TODO: call the counter function
  counter();
  counter();
  counter();
  counter();
  counter();
  return 0;
}
void counter(){
  // write a function that keeps count of the number of times it was called
  static int count = 0;
  count++;
  printf("function has been called %d times\n", count);
}
