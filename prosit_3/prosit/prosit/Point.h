#include <iostream>

class Point
{
protected:
	int coord_x;
	int coord_y;
	int coord_z;

public:
	Point();
	Point(int c_coord_x, int c_coord_y);
	Point(int c_coord_x, int c_coord_y, int c_coord_z);        
	float Distance(Point const& T);
	float carre(float value);
};

