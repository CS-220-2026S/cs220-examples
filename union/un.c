#include <stdio.h>
#include <stdlib.h>

int main(){
  union intBytes{
    int val;
    unsigned char bytes[4];
  } num;
  // print the bytes of num in order
  num.val = 0x21a40099;
  for (int i = 0; i < 4; i++){
    printf("bytes[%d] = 0x%x\n", i, num.bytes[i]);
  }
  return 0;
}
