#include <iostream>
#include <string>

class Etudiant {

protected:
	std::string nom;
	int moyenne;

public:
	Etudiant();
	Etudiant(std::string c_nom, int c_moyenne);
	void affichage();

};