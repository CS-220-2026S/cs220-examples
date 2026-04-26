#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
  int status;
  printf("printing contents of directory...\n");
  // exec 'ls -l'
  char *argv[] = {"/bin/ls","-l",NULL};
  if (fork() == 0)
    execve("/bin/ls", argv, NULL);
  wait(&status);
  if (status == 0) // forked process executed normally
    printf("finished\n");
  return 0 ;
}
