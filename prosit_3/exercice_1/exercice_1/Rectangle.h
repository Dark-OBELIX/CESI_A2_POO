#include "Objet_2D.h"

class Rectangle : public Objet_2D{
public:
	Rectangle();
	Rectangle(int t_dim1, int t_dim2);
	int getLongeur();
	int getLargeur();

};

