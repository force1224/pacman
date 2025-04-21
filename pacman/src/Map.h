#pragma once
#include <vector>
#include <string>

class Map {
public:
    Map();
    void draw() const;
    int getTileSize() const;
private:
    std::vector<std::string> grid;
    int tileSize;
};
