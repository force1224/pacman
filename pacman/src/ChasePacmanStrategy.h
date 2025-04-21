#pragma once
#include "MovementStrategy.h"

class ChasePacmanStrategy : public MovementStrategy {
public:
    ChasePacmanStrategy(int* pacX, int* pacY);
    void move(int& x, int& y) override;
private:
    int* targetX;
    int* targetY;
};
