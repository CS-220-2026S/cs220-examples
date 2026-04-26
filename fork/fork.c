#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
  int status;
  int x = 1; 
  pid_t pid;
  pid = fork();
  // edit this so that the child always finishes first
  if (pid == 0) {
    x++;
    printf("In child: x = %d\n", x);
  }else {
    wait(&status);
    x--;
    printf("In parent: x = %d\n", x);
  }
  return 0 ;
}
