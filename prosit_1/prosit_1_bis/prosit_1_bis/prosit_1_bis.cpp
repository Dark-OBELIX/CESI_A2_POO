#include <iostream>
using namespace std;
#include "point.h"

int main()
{/*
    Point A, B;
    cout << "SAISIE DU POINT A" << endl;
    cout << "Tapez l'abscisse : "; cin >> A.x;
    cout << "Tapez l'ordonnee : "; cin >> A.y;

    cout << "SAISIE DU POINT B" << endl;
    cout << "Tapez l'abscisse : "; cin >> B.x;
    cout << "Tapez l'ordonnee : "; cin >> B.y;

    cout << A.distance(B) << endl;
   
    return 0;

    */
    int var = 42;
    int *pointeur_1(0); // le (0) est une s�curit� pour �viter les fuites
    pointeur_1 = &var; // le pointeur pointe vers l'adresse de var

    cout << &var << endl; // adresse de var
    cout << pointeur_1 << endl; // adresse de var
    cout << *pointeur_1 << endl; // valeur de la case m�moire point�e
    *pointeur_1 = 142
    cout << *pointeur_1 << endl;

    int vart = 50;
    int *pointeur_2;
    pointeur_2 = &vart;

    cout << *pointeur_1 + *pointeur_2 << endl;

    delete pointeur_1; // on lib�re la case m�moire du pointeur

    return 0;
}
