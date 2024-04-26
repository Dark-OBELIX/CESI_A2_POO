//#include "Point.h"
#include "Stockage.h" 
#include <iostream>
using namespace std;

int main() {

    Stockage* objets;
    Point* pts;
    char o; int l, g, i, n;
    
    cout << "Choisissez le nombre des objets" << endl;
    cin >> n;
    objets = new Stockage(n);

    for (i = 0; i < n; i++) {

        cout << "Objet numero : " << i + 1 << endl;
        cout << "Cordonne x : " << endl; cin >> l;
        cout << "Cordonne y : " << endl; cin >> g;

        pts = new Point(l, g);

        objets->add(pts);

    }

objets->afficherInfos();

// delete objets; 

}