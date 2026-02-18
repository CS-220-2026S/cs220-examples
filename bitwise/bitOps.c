#include <stdio.h>
#include <stdlib.h>

#define BIT(n) (1UL << (n))
#define MASK(len,pos) (((1UL << (len)) -1) << (pos))

void setBit(unsigned long *val, int pos){
  // set the bit in pos 'pos' to 1
  *val |= BIT(pos);
}
void flipBit(unsigned long *val, int pos){
  // toggle the bit in position 'pos' from 0 to 1 or from 1 to 0
  *val ^= BIT(pos);
}
void clearBit(unsigned long *val, int pos){
  // set the bit in position 'pos' to 0
  *val &= ~BIT(pos);
}
void flipBitFld(unsigned long *val, int len, int pos){
  // TODO: toggle the 'len' bits starting in position 'pos'
  // unsigned long mask = (1UL << len) - 1;
  // mask <<= pos;
  *val ^= MASK(len,pos);
}
