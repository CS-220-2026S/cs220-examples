#include <stdio.h>

union unFl {
  float fl;
  int val;
} floatHex;

int main(){
  floatHex.val = 0x41da0000;
  printf("float = %f\n", floatHex.fl);
  floatHex.fl = 2.0;
  printf("bytes = 0x%08x\n",floatHex.val);
  printf("bytes = 0x%08x\n", (int) floatHex.fl);
  return 0;
}
