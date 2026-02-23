#include <stdio.h>
#include <stdlib.h>
#include "arith.h"

int main(int argc, char *argv[]){
  /* Get the two integers passed in through the command line
     and perform each of the operations defined in arith.c,
     printing the result in the form "1 + 2 = 3".
     We will need to use the "atoi" function to convert the
     command line arguments from ascii to integers, and
     the "printf" function to print our result.
  */
  int a, b;
  if (argc > 1)
    a = atoi(argv[1]);
  if (argc > 2)
    b = atoi(argv[2]);

  printf("%d + %d = %d\n", a, b, add(a,b));
  printf("%d - %d = %d\n", a, b, sub(a,b));
  printf("%d * %d = %d\n", a, b, mul(a,b));
  printf("%d / %d = %d\n", a, b, divide(a,b));
  printf("%d %% %d = %d\n", a, b, remain(a,b));
  printf("%d ** %d = %d\n", a, b, expnt(a,b));
  return 0;
}
