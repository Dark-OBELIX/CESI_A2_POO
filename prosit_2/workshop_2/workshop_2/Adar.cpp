#include "Etudiant.h"
#include "Adar.h"
#include <iostream>
#include <string>

Adar::Adar(int m_abs, int m_moyenne) {
	nom = "adar";
	abs = m_abs;
	moyenne = m_moyenne;
};

void Adar::affichageabs() {
	std::cout << abs;
};