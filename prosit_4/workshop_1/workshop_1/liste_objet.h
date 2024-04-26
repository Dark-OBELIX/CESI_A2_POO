#include "Tableau.h"

class liste_objet
{
private:

	Tableau** tab;
	int taille;
	int index;

public:
	liste_objet(int tmptaille);
	/*
	~liste_objet();
	void add(Tableau* tmpObj);
	void add(Tableau* tmpObj, int tmpindex);
	*/
	void afficherInfos();
};

