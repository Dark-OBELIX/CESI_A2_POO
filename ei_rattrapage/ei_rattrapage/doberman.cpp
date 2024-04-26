#include "doberman.h"

void doberman::Doberman(int nwage, bool nwpuce, int nwnombre_cambriolage_arrete) {
	age = nwage;
	puce = nwpuce;
	nombre_cambriolage_arrete = nwnombre_cambriolage_arrete;
};

int doberman::getage() {
	return age;
};

bool doberman::getpuce() {
	return puce;
};

int doberman::getnombre_cambriolage_arrete() {
	return nombre_cambriolage_arrete;
};

void doberman::affichage() {
	return "Bonjour, je suis un doberman j ai " + getage() + " ans et puce : " + getpuce + ". ";

}
