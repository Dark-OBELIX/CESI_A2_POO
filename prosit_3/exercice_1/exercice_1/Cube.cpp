#include "Cube.h"
#include <iostream>
#include <string>

Cube::Cube() {}

Cube::Cube(int r_dim1) {
	dim1 = r_dim1;
}

int Cube::getCote() {
	return dim1;
}

int Cube::getPerimetre() {
	return 4 * dim1;
}

int Cube::getAire() {
	return dim1 * dim1;
}

std::string Cube::affichageinfo() {
	std::cout << "afficahge info cube" << std::endl;
	std::cout << dim1 << std::endl;
	return " ";

}