#include "raylib.h"
#include "Map.h"
#include "PacMan.h"
#include "Ghost.h"
#include "GhostFactory.h"
#include "ChasePacmanStrategy.h"
#include "RandomMoveStrategy.h"
#include "SpeedBoostDecorator.h"


int main() {
    const int screenWidth = 640;
    const int screenHeight = 480;

    InitWindow(screenWidth, screenHeight, "Pac-Man with Raylib & Design Patterns");
    SetTargetFPS(60);

    Map gameMap;

    // Posisi awal Pac-Man
    int pacX = 32 * 1 + 16;
    int pacY = 32 * 3 + 16;
    PacMan pacman(pacX, pacY);

    // Buat strategi gerakan
    MovementStrategy* chaseStrategy = new ChasePacmanStrategy(&pacX, &pacY);
    MovementStrategy* randomStrategy = new RandomMoveStrategy();

    // Buat ghost lewat factory
    Ghost* ghost = GhostFactory::createGhost("Blinky", 32 * 10 + 16, 32 * 2 + 16, chaseStrategy);
    SpeedBoostDecorator* boostedGhost = nullptr;


    while (!WindowShouldClose()) {
        // ===== Update Logic =====
        
        // Simulasi trigger power pellet (tekan tombol SPACE)
        #include "SpeedBoostDecorator.h"

SpeedBoostDecorator* boostedGhost = nullptr;

// ...

        if (IsKeyPressed(KEY_SPACE) && !boostedGhost) {
            boostedGhost = new SpeedBoostDecorator(ghost, 300);
            ghost = boostedGhost; // ghost sekarang menunjuk ke decorator
        }

        // Cek apakah efek sudah habis
        if (boostedGhost && boostedGhost->isExpired()) {
            ghost = boostedGhost->getWrappedGhost(); // kembali ke ghost normal
            delete boostedGhost;
            boostedGhost = nullptr;
        }

    
        ghost->move();  // ghost akan move biasa atau 2x kalau sedang boosted
    
        // ===== Draw Logic =====
        BeginDrawing();
        ClearBackground(BLACK);
    
        gameMap.draw();
        pacman.draw();
        ghost->draw();
    
        EndDrawing();
    }
    
    // Cleanup memory
    delete ghost;
    delete chaseStrategy;
    delete randomStrategy;

    CloseWindow();
    return 0;
}
