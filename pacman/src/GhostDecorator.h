#pragma once
#include "Ghost.h"

class GhostDecorator : public Ghost {
public:
    GhostDecorator(Ghost* baseGhost);
    virtual void move() override;
    virtual void draw() const override;

protected:
    Ghost* wrappedGhost;
};
