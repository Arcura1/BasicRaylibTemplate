#include <raylib.h>

int main()
{
    InitWindow(800, 450, "Raylib Template");

    SetTargetFPS(60);
    int size=10;
    int x=1;
    int y=1;
    int x_direction=1;
    int y_direction=1;
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawCircle(y,x,size,RED);
        
        if(x>=450)
        x_direction=-1;
        if (x<=0)
        x_direction=1;

        if(y>=800)
        y_direction=-1;
        if (y<=0)
        y_direction=1;
        
        x=x+x_direction;

        y=y+y_direction;

        DrawText("Hello Raylib!", 200, 150, 30, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
