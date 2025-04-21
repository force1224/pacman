#pragma once
#include "raylib.h"

class MovementStrategy {
public:
    virtual ~MovementStrategy() = default;
    virtual void move(int& x, int& y) = 0;
};
