// ei2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"

int main()
{
    std::cout << afficher(B) << std::endl;
}

void afficher(A *) {
    test A();
    A.afficher();
}