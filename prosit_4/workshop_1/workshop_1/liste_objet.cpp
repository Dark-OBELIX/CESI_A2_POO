#include "liste_objet.h" 
#include <iostream> 

//using namespace System;
using namespace std;

liste_objet::liste_objet(int tmptaille) :taille(tmptaille) {

	index = 0;
	tab = new Tableau * [taille];

};

void liste_objet::afficherInfos() {

	int i;
	for (i = 0; i < taille; i++) {
		cout << "objet numero " << i + 1 << " " << tab[i]<< endl;
	};

};