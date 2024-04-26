#include "Stockage.h" 
#include <iostream> 

using namespace std;

Stockage::Stockage(int tmptaille) :taille(tmptaille) {
	index = 0;
	tab = new Point * [taille];

};

Stockage::~Stockage() { delete* tab; };

void Stockage::add(Point* tmpObj) {
	this->add(tmpObj, this->index);
	this->index++;
};



void Stockage::add(Point* tmpObj, int tmpindex) {
	tab[tmpindex] = tmpObj;
};

void Stockage::afficherInfos() {
	int i;
	for (i = 0; i < taille; i++) {
		cout << "objet numero : " << i + 1 << " " << tab[i] << endl; // affiche les adresses memoires des objets
		//cout << "objet numero : " << i + 1 << " " << *tab[i] << endl; // affiche objets

	};
};