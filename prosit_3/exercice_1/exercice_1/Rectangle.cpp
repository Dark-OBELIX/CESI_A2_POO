#include "Rectangle.h"
#include <iostream>
#include <string>

Rectangle::Rectangle(){}

Rectangle::Rectangle(int t_dim1, int t_dim2) {
	dim1 = t_dim1;
	dim2 = t_dim1;
}

int Rectangle::getLongeur() {
	return dim1;
}

int Rectangle::getLargeur() {
	return dim2;
}