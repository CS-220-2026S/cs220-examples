#include <stdio.h>
#include <stdlib.h>

struct vector{
  int *start;
  int len;
}; // Question: how many bytes is this struct?

struct vector *createVector(int len){
  return NULL;
}

void printVector(struct vector *vect){
  
}

void freeVector(struct vector *vect){
  
}

int main(int argc, char *argv[]){
  struct vector *vect = createVector(argc-1);
  printVector(vect);
  freeVector(vect);
  return 0;
}
