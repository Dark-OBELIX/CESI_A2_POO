#include <string>

class Objet_2D {
protected:
	int dim1;
	int dim2;
	Objet_2D* suivant;

public:
	Objet_2D();
	Objet_2D(int dim1, int dim2);
	virtual int getPerimetre();
	virtual int getAire();
	virtual std::string Affichageinfo();
	Objet_2D* getSuivant();
	void setSuivant(Objet_2D* tmpObj);
};

