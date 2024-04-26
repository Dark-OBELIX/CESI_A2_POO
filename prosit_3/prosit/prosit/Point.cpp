#include "Point.h"
#include <iostream>
#include <cmath>

Point::Point() {};

Point::Point(int c_coord_x, int c_coord_y) {
	coord_x = c_coord_x;
	coord_y = c_coord_y;
};

Point::Point(int c_coord_x, int c_coord_y, int c_coord_z) {
	coord_x = c_coord_x;
	coord_y = c_coord_y;
	coord_z = c_coord_z;
};

float Point::Distance(Point const& T)
{
	return sqrt(carre(T.coord_x - coord_x) + carre(T.coord_y - coord_y) + carre(T.coord_z - coord_z));
};

float Point::carre(float value){
	return value * value;
}
		
