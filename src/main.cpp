#include "include.h"

int main()
{
    InitWindow(800, 450, "Raylib Template");

    SetTargetFPS(60);
    int size=10;
    int x=10;
    int y=100;
    int x_speed=50;
    int y_speed=20;
    int gravitiy=1;

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircle(y,x,size,RED);

        y=y+y_speed;
        x=x+x_speed;

        x_speed=x_speed+gravitiy;
        
        if(x>=440)
        {   
            x=440;
            x_speed=x_speed/2*-1;
            y_speed=y_speed-y_speed/5;
            if(y_speed==1){
            y_speed=0;
            }
        }
        if (x<=0)
        {
            x=0;
            x_speed=x_speed/2*-1;
        }

        if(y>=800)
        {
            y=800;
            y_speed=y_speed/2*-1;
        }
        if (y<=0)
        {
            y=0;
            y_speed=y_speed/2*-1;
        }



  
        DrawText("Hello Raylib!", 200, 150, 30, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}