#include "Tableau.h"
#include <iostream>

Tableau::Tableau(int size) {
    int i;
    for (i = 0; i < size; i++) {
        std::cout << "value " << i + 1 << " : ";
        std::cin >> tab[i];
    }
};

Tableau::Tableau(int taba0, int taba1, int taba2) {
	tab[0] = taba0;
	tab[1] = taba1;
	tab[2] = taba2;
};

void Tableau::affichage(int size) {
    //std::cout << size;
    int i;
    for (i = 0; i < size; i++) {
        std::cout << tab[i] << "\n";
    }
};