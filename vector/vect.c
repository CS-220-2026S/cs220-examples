#include <stdio.h>
#include <stdlib.h>

struct vector{
  int *start;
  int len;
}; // Question: how many bytes is this struct? 16 bytes.

struct vector *createVector(int len){
  struct vector *newVect = malloc(sizeof(struct vector));
  newVect->start = malloc(len*sizeof(int));
  newVect->len = len;
  return newVect;
}

void printVector(struct vector *vect){
  for (int i = 0; i < vect->len; i++){
    printf("index %d = %d\n",i,vect->start[i]);
  }
}

void freeVector(struct vector *vect){
  free(vect->start);
  free(vect);
}

int main(int argc, char *argv[]){
  struct vector *vect = createVector(argc-1);
  for (int i = 1; i < argc; i++){
    vect->start[i-1] = atoi(argv[i]);
  }
  printVector(vect);
  freeVector(vect);
  return 0;
}
