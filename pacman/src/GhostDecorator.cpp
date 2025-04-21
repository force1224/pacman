#include "GhostDecorator.h"

GhostDecorator::GhostDecorator(Ghost* baseGhost)
    : Ghost(*baseGhost), wrappedGhost(baseGhost) {}

void GhostDecorator::move() {
    wrappedGhost->move();
}

void GhostDecorator::draw() const {
    wrappedGhost->draw();
}
