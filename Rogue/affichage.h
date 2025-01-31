#include <iostream>
#include <vector>

void rencontre(std::vector<int> cursor, int & etage, int dimx , std::vector<char> grille) {
    if (grille[cursor[0] + cursor[1] * dimx] == *"s") {
        etage += 1;
    }
    if (grille[cursor[0] + cursor[1] * dimx] == *"e") {
        etage -= 1;
    }
}


void draw_map(int dimy, int dimx, std::vector<char> grille, std::vector<int> hero) {
    int n = hero[0] * hero[1];

    for (int i = 0; i < dimy * dimx; i++) {
        if (i % dimx == 0) {
            std::cout << "\n";
        }
        if (i == hero[0] + hero[1] * dimx) {
            std::cout << "@";
        }

        /*else {
            int a = int(i / dimx) - hero[1];
            int b = i % dimx - hero[0];
            if (a * a + b * b < 10) {
                std::cout << grille[i];
            }
            else {
                std::cout << " ";
            }
        }*/

        else {
            int a = int(i / dimx) - hero[1];
            int b = i % dimx - hero[0];
            if (a * a + b * b < 19) {
                if (grille[hero[0] + hero[1] * dimx] != '#') {
                    if (grille[i] != '#') {
                        std::cout << grille[i];
                    }
                    else {
                        std::cout << ' ';
                    }
                }
                else {
                    if (grille[i] == '#' || grille[i] == '+') {
                        std::cout << grille[i];
                    }
                    else {
                        std::cout << " ";
                    }
                }
            }
            else {
                std::cout << " ";
            }
            

        }


    }
}
