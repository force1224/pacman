#pragma once
#include "Ghost.h"

class GhostFactory {
public:
    static Ghost* createGhost(const std::string& type, int x, int y, MovementStrategy* strategy);
};
