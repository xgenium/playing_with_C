#include "raylib.h"

int main()
{
  InitWindow(400, 400, "My Window");
  SetTargetFPS(60);

  while (!WindowShouldClose())
  {
    BeginDrawing();
      ClearBackground(RAYWHITE);
      DrawText("Hello", 150, 150, 20, DARKGRAY);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
