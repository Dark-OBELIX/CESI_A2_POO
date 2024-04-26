#include "Point.h"

class Stockage
{
private:

	Point** tab;
	int taille;
	int index;

public:

	Stockage(int tmptaille);
	~Stockage();
	void add(Point* tmpObj);
	void add(Point* tmpObj, int tmpindex);
	void afficherInfos();

};

