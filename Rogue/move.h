#include <vector>

bool verif(int* cursor, std::vector<char> grille, int dimx, int dimy) {
    int n = cursor[0] + cursor[1] * dimx;
    if (grille[n] == ' ' or grille[n] == '-' or grille[n] == '|') {
        return false;
    }
    else { return true; }
}

std::vector<int> move(char x, int dimx, int dimy, std::vector <char> grille, std::vector<int> hero) {

    int pos[2]{};
    pos[0] = hero[0];
    pos[1] = hero[1];


    if (x == *"z") { // 'z'
        pos[1] -= 1;
    }
    else if (x == *"q") {
        pos[0] -= 1;
    }
    else if (x == *"s") {
        pos[1] += 1;
    }
    else if (x == *"d") {
        pos[0] += 1;
    }

    if (verif(pos,grille , dimx, dimy) == true) {
        hero[0] = pos[0];
        hero[1] = pos[1];
    }
    return hero; 
}