#include <stdio.h>
#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "raylib test");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("raylib works!", 280, 200, 30, DARKGREEN);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
