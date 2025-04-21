#include "GhostDecorator.h"

GhostDecorator::GhostDecorator(Ghost* baseGhost)
    : Ghost(baseGhost->getPosition().x, baseGhost->getPosition().y, nullptr), wrappedGhost(baseGhost) {}

void GhostDecorator::move() {
    wrappedGhost->move();
}

void GhostDecorator::draw() const {
    wrappedGhost->draw();
}
