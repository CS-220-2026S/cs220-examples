#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
  int x = 1; 
  pid_t pid;
  pid = fork();
  // TODO: Edit this so that the child always finished first
  if (pid == 0) {
    x++;
    printf("In child: x = %d\n", x);
  }else {
    x--;
    printf("In parent: x = %d\n", x);
  }
  return 0 ;
}
