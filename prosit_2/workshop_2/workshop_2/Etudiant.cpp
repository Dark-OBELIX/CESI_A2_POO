#include <iostream>
#include "Etudiant.h"
#include <string>

Etudiant::Etudiant(){};

Etudiant::Etudiant(std::string c_nom, int c_moyenne) {
	nom = c_nom;
	moyenne = c_moyenne;
};

void Etudiant::affichage() {
	std::cout << "test";
};
