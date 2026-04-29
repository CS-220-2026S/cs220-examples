#include <stdio.h>
#include <string.h>

#define SIZE 64

int main(){
  // TODO: in an loop, read a 64-byte message from stdin
  // print the message back
  char msg[SIZE];
  while(1){
    printf("> ");
    fgets(msg,sizeof(msg),stdin);
    printf("%s",msg);
    if (!strchr(msg, '\n')){
      while(getchar() != '\n');
      putchar('\n');
    }
    
  }
  return 0;
}
