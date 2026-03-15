#include <stdio.h>
#include <stdlib.h>

int strlen_asm(char * str);
int strcpy_asm(char *dest, char *src);

int main(){
  char str1[100] = {0};
  char *str2 = "Hello, World!";
  printf("copying str2 to str1...\n");
  strcpy_asm(str1,str2);
  printf("str1 = %s\n", str1);
  printf("len(str1) = %d\n", strlen_asm(str1));
  return 0;
}
