#include <stdio.h>
#include <stdlib.h>
#include "bitOps.h"

int main(){
  unsigned long val = 0;
  printf("Setting bit in position 7...\n");
  setBit(&val, 7);
  printf("val = 0b%064lb\n", val);
  printf("Setting bit in position 63...\n");
  setBit(&val, 63);
  printf("val = 0b%064lb\n", val);
  printf("Setting bit in position 10...\n");
  setBit(&val, 10);
  printf("val = 0b%064lb\n", val);
  printf("Clearing bit in position 7...\n");
  clearBit(&val, 7);
  printf("val = 0b%064lb\n", val);
  printf("Flipping bit in position 10...\n");
  flipBit(&val, 10);
  printf("val = 0b%064lb\n", val);
  printf("Flipping bit in position 11...\n");
  flipBit(&val, 11);
  printf("val = 0b%064lb\n", val);
  printf("Flipping bits in position 5-14...\n");
  flipBitFld(&val, 10, 5);
  printf("val = 0b%064lb\n", val);
}
