#include "Objet_2D.h"
#include <iostream>
#include <string>

Objet_2D::Objet_2D() {};

Objet_2D::Objet_2D(int tdim1, int tdim2) : dim1(tdim1), dim2(tdim2) {};

int Objet_2D::getPerimetre() {
	return (dim1 * 2) + (dim2 * 2);
}

int Objet_2D::getAire() {
	return dim1 * dim2;
}

std::string Objet_2D::Affichageinfo() {
	std::cout << "afficahge info objet" << std::endl;
	std::cout << dim1 << std::endl;
	std::cout << dim2 << std::endl;
	return " ";

}

Objet_2D* Objet_2D::getSuivant() { 
	return suivant; 
};



void Objet_2D::setSuivant(Objet_2D* tmpObj) { 
	suivant = tmpObj; 
};