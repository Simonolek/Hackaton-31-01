#include <vector>



struct object {
    int pv_max;
    int pv;
    int strenght;
    int gold;
};

struct hero {
    std::vector<int> pos;
    int pv_max;
    int pv;
    int strenght;
    int gold;

    hero() : pos(2) {
        pos[0] = 1;
        pos[1] = 1;
    }

};

