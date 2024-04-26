#include "Tableau.h"
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    Tableau test_1(2, 4, 6);
    test_1.affichage(3);

    std::cout << "\n";

    Tableau test_2(3);
    test_2.affichage(3);

    std::cout << "\n";

}

