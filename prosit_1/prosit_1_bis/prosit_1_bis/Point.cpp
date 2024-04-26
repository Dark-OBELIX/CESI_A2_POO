#include "point.h"
#include <cmath>

float Point::distance(Point const& T)
{
    return sqrt(carre(T.x - x) + carre(T.y - y));
};

double Point::carre(int val)
{
    return val * val;
};

