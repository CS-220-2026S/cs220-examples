#ifndef COORD_H
#define COORD_H
typedef struct coord_struct * coord;

coord coord_create(int x, int y); // creates a coordinate pair with specifies x- and y-coordinates
int coord_getx(coord xy); // returns the x-coordinate
int coord_gety(coord xy); // returns the y-coordinate
#endif
