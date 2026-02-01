#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
  char name[20];
  int age;
};

void printPerson(struct person p){
  // print each field in the struct
  printf("name = %s\n", p.name);
  printf("age = %d\n", p.age);
}

int main(){
  // TODO: initialize three person structs in three different ways
  return 0;
}
