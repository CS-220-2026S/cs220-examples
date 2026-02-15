#include <stdio.h>
#include <stdlib.h>

void setBit(unsigned long *val, int pos){
  // set the bit in pos 'pos' to 1
  *val |= (1UL << pos);
}
void flipBit(unsigned long *val, int pos){
  // toggle the bit in position 'pos' from 0 to 1 or from 1 to 0
  *val ^= (1UL << pos);
}
void clearBit(unsigned long *val, int pos){
  // set the bit in position 'pos' to 0
  *val &= ~(1UL << pos);
}
void flipBitFld(unsigned long *val, int len, int pos){
  // TODO: toggle the 'len' bits starting in position 'pos'
  unsigned long mask = (1UL << len) - 1;
  mask <<= pos;
  *val ^= mask;
}
