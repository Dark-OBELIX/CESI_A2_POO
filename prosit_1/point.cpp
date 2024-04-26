#include "point.h"
#include <cmath>

double Point::distance(Point const& T)
{
    return sqrt(x + y + T.x + T.y);
};






