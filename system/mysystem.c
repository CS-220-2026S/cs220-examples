#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

void handler(int sig){
  printf("\nTerminating process...\n");
}

int mysystem(char *cmd){
  // TODO: run the command 'cmd' in a shell
  // return the exit status of the process
  signal(SIGINT,handler);
  int status;
  if (fork() == 0){
    signal(SIGINT,SIG_DFL);
    char *argv[] = {"/bin/sh", "-c", cmd, NULL};
    execve("/bin/sh",argv,NULL);
  }
  wait(&status);
  return status;
}

int main(){
  mysystem("./myecho");
  mysystem("pwd");
  mysystem("ls -l");
  return 0;
}
