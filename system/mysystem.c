#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

int mysystem(char *cmd){
  // TODO: run the command 'cmd' in a shell
  // return the exit status of the process
  return 0;
}

int main(){
  mysystem("./myecho");
  mysystem("ls -l");
  return 0;
}
