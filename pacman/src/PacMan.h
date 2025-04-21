#pragma once
#include "raylib.h"

class PacMan {
public:
    PacMan(int x, int y);
    void draw() const;
    void move(); // Placeholder
private:
    int x, y;
};
