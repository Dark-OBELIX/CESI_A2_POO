#include "Rectangle.h"

class Cube : public Rectangle {
public:
	Cube();
	Cube(int r_dim1);
	int getCote();
	int getPerimetre();
	int getAire();
	std::string affichageinfo();
};

// heritage de rectangle pour cube