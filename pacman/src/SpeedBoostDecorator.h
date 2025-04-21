#pragma once
#include "GhostDecorator.h"

class SpeedBoostDecorator : public GhostDecorator {
public:
    SpeedBoostDecorator(Ghost* baseGhost, int durationFrames);
    void move() override;
    bool isExpired() const;

    Ghost* getWrappedGhost() const;

private:
    int duration;
    int currentFrame;
};
