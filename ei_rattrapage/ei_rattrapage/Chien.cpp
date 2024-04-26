#include "Chien.h"

void Chien::chien() {};

void Chien::chien(int nwage,bool nwpuce) {
	age = nwage;
	puce = nwpuce;
};

int Chien::getage() {
	return age;
};

bool Chien::getpuce() {
	return puce;
};

void Chien::affichage() {
	return "Bonjour, je suis un chien j ai " + getage() + " ans et puce : " + getpuce + ". ";

}

void  Chien::setage() {};
void  Chien::setpuce() {};
