#pragma once
#include "MovementStrategy.h"

class RandomMoveStrategy : public MovementStrategy {
public:
    void move(int& x, int& y) override;
};
