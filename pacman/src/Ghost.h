#pragma once
#include "MovementStrategy.h"
#include "raylib.h"

class Ghost {
public:
    Ghost(int x, int y, MovementStrategy* strategy);
    virtual ~Ghost();

    virtual void move();         // <- penting: virtual
    virtual void draw() const;   // <- penting: virtual

    Vector2 getPosition() const;

protected:
    int x, y;
    MovementStrategy* strategy;
};
