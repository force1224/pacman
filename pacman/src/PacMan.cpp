#include "PacMan.h"

PacMan::PacMan(int x, int y) : x(x), y(y) {}

void PacMan::draw() const {
    DrawCircle(x, y, 12, YELLOW);
}

void PacMan::move() {
    // Placeholder move
}
