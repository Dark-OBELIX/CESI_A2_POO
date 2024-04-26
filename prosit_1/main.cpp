//g++ -std=c++17 -Wall -Wextra -Werror main.cpp -o prog

#include <iostream>
using namespace std;
#include "point.h"

int main()
{
     Point A, B;
     cout << "SAISIE DU POINT A" << endl;
     cout << "Tapez l'abscisse : "; cin >> A.x;
     cout << "Tapez l'ordonnée : "; cin >> A.y;

     cout << "SAISIE DU POINT B" << endl;
     cout << "Tapez l'abscisse : "; cin >> B.x;
     cout << "Tapez l'ordonnée : "; cin >> B.y;

     cout << A.distance(B) <<endl;
/*
     cout << "SAISIE DU POINT B" << endl;
     cout << "Tapez l'abscisse : "; cin >> B.x;
     cout << "Tapez l'ordonnée : "; cin >> B.y;
     int h = 42;
     //C = A.distance(h);
     cout << A.distance(h) <<endl;*/
     /*
     cout << "MILIEU DE AB" << endl;
     cout << "L'abscisse vaut : " << C.x << endl;
     cout << "L'ordonnée vaut : " << C.y << endl;
     cout << endl;
     */
     /*cout << "La distance AB vaut :" << A.distance(B) << endl;*/

     return 0;
} 