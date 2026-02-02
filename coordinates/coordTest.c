#include <stdio.h>
#include <stdlib.h>
#include "coord.h"

int main(int argc, char * argv[]){
  /* TODO: create a new coordinate pair, whose x- and y-coordinates
  are specified in the first and second command line arguments resp.
  then print the value of each coordinate to verify that they were
  initialized correctly
  */
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  coord xy = coord_create(x,y);
  printf("x = %d, y = %d\n", coord_getx(xy), coord_gety(xy));
  return 0;
}
