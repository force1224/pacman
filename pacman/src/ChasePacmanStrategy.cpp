#include "ChasePacmanStrategy.h"

ChasePacmanStrategy::ChasePacmanStrategy(int* pacX, int* pacY)
    : targetX(pacX), targetY(pacY) {}

void ChasePacmanStrategy::move(int& x, int& y) {
    if (x < *targetX) x += 1;
    if (x > *targetX) x -= 1;
    if (y < *targetY) y += 1;
    if (y > *targetY) y -= 1;
}
