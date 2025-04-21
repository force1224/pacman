#include "RandomMoveStrategy.h"
#include <cstdlib>

void RandomMoveStrategy::move(int& x, int& y) {
    int dir = rand() % 4;
    switch (dir) {
        case 0: x += 1; break;
        case 1: x -= 1; break;
        case 2: y += 1; break;
        case 3: y -= 1; break;
    }
}
