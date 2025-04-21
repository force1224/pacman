#include "Map.h"
#include "raylib.h"

Map::Map() {
    grid = {
        "####################",
        "#........#.........#",
        "#.####.#.#.#######.#",
        "#.#....#.#........#.#",
        "#.#.##.#.#######.#.#",
        "#.#..............#.#",
        "#.#######.########.#",
        "#........P.........#",
        "#.######.######.####",
        "#..................#",
        "#.######.######.####",
        "#........G.........#",
        "#.#######.########.#",
        "#.#..............#.#",
        "#.#.##.#.#######.#.#",
        "#.#....#.#..........#",
        "#.####.#.#.#######.#",
        "#........#.........#",
        "####################"
    };    
    tileSize = 20; // Ukuran tile 32x32 pixel
}

void Map::draw() const {
    for (int y = 0; y < grid.size(); ++y) {
        for (int x = 0; x < grid[y].size(); ++x) {
            char tile = grid[y][x];
            Color color;
            switch (tile) {
                case '#': color = DARKGRAY; break;      // Wall
                case '.': color = YELLOW; break;        // Dots
                case 'P': color = BLUE; break;          // Pac-Man starting point
                default: color = BLACK; break;          // Empty space
            }
            DrawRectangle(x * tileSize, y * tileSize, tileSize, tileSize, color);
        }
    }
}

int Map::getTileSize() const {
    return tileSize;
}
