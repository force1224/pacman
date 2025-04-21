#include "SpeedBoostDecorator.h"

SpeedBoostDecorator::SpeedBoostDecorator(Ghost* baseGhost, int durationFrames)
    : GhostDecorator(baseGhost), duration(durationFrames), currentFrame(0) {}

void SpeedBoostDecorator::move() {
    // Speed boost: gerak 2x per frame
    wrappedGhost->move();
    wrappedGhost->move();

    currentFrame++;
}

bool SpeedBoostDecorator::isExpired() const {
    return currentFrame >= duration;
}

Ghost* SpeedBoostDecorator::getWrappedGhost() const {
    return wrappedGhost;
}
