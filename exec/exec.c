#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
  printf("launching shell...\n");
  // TODO: exec 'ls -l'
  printf("finished\n");
  return 0 ;
}
