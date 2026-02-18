#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){
  // TODO: set ptr_i to ptr_v and ptr_l to ptr_i
  // make sure we aren't getting warnings
  void *ptr_v = malloc(8);
  int *ptr_i = ptr_v;
  long *ptr_l = (long *) ptr_i;

  // TODO: set the values to which ptr_i and
  // ptr_i+1 point to 0x64 and 0xc8 respectively,
  // and print the values that ptr_i and ptr_l
  // point to
  // again, make sure there are no warnings
  *ptr_i = 0x64;
  *(ptr_i + 1) = 0xc8;
  printf("*ptr_i = %08x, *ptr_l = %016lx\n", *ptr_i, *ptr_l);  

  // TODO: clear the lower 13 bits of ptr_v
  printf("BEFORE: ptr_v = %p\n", ptr_v);
  uintptr_t temp = (uintptr_t) ptr_v;
  temp &= ~((1UL << 13)-1);
  ptr_v = (void *) temp;
  printf("AFTER: ptr_v = %p\n", ptr_v);
  
  return 0;
}
