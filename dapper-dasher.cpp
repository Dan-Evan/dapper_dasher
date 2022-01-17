/*
*Author: Daniel Evans
*Date: January 17,2022
*Description: This program
*/
#include "raylib.h"

int main()
{
    //window dimensions
    const int window_width{600};
    const int window_height{380};
    //intialize the window.
    InitWindow(window_width, window_height, "Dapper-Dasher!");

    //rectangle dimension
    const int width{50};
    const int height{80};

    int posY{window_height-height};
    int velocity{0};

    SetTargetFPS(60);
    while ( !WindowShouldClose() )
    {
        //start drawing
        BeginDrawing();
        ClearBackground(WHITE);

        DrawRectangle(window_width/2, posY, width, height, BLUE);

        if (IsKeyPressed(KEY_SPACE))
        {
            velocity -= 10;
        }

            posY += velocity;
            DrawRectangle(window_width/2, posY, width, height, BLUE);

        //stop drawing
        EndDrawing();
    }
    CloseWindow();
}