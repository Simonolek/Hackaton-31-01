#include <iostream>
#include <vector>
#include "affichage.h"
#include "Item.h"
#include "move.h"
#include "maps.h"




int main(int argc, const char* argv[]) {
    maps map; 
    hero hero; 
    int etage = 0;

    while (true) {
        draw_map(map.dimy,map.dimx, map.Maps[etage], hero.pos);
        char x;
        std::cin >> x;
        hero.pos = move(x,map.dimx, map.dimy, map.Maps[etage], hero.pos);
        rencontre(hero.pos,etage, map.dimx, map.Maps[etage]);
        if (x == *"e") {
            break;
        }
    }
}

