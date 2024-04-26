#include <iostream>
#include "Chien.h"
#include "doberman.h"
#include "dalmatien.h"


int main()
{  
    doberman titi;
    titi.Doberman(12, true,3);

    dalmatien toto;
    toto.Dalmatien(12, true, 3);

    Chien inconnu;
    inconnu.chien();

    std::cout << toto.getage();
}


