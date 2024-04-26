#include "dalmatien.h"

void dalmatien::Dalmatien(int nwage, bool nwpuce, int nwage_ancien_maitre) {
	age = nwage;
	puce = nwpuce;
	age_ancien_maitre = nwage_ancien_maitre;
};

int dalmatien::getage() {
	return age;
};

bool dalmatien::getpuce() {
	return puce;
};

int dalmatien::getage_ancien_maitre() {
	return age_ancien_maitre;
};

void dalmatien::affichage() {
	return "Bonjour, je suis un dalmatien j ai " + getage() + " ans et puce : " + getpuce + ". ";

}
