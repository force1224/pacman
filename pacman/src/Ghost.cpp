#include "Ghost.h"

Ghost::Ghost(const std::string& name, int x, int y, MovementStrategy* strategy)
    : name(name), x(x), y(y), strategy(strategy) {
    color = RED;
}

void Ghost::draw() const {
    DrawCircle(x, y, 12, color);
}

void Ghost::move() {
    if (strategy) strategy->move(x, y);
}

void Ghost::setStrategy(MovementStrategy* newStrategy) {
    strategy = newStrategy;
}
