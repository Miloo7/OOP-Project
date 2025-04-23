#include <raylib.h>
#include "grid.h"


int main() 
{
Color DBlue = {50,50,130,255};
InitWindow(300,600,"Tetris");
SetTargetFPS(30);

Grid grid=Grid();
grid.grid[0][1]=1;
grid.grid[0][2]=2;
grid.grid[0][3]=3;
grid.grid[0][4]=4;
grid.grid[0][5]=5;
grid.grid[0][6]=6;
grid.grid[0][7]=7;
grid.print();

while(WindowShouldClose()== false){
    BeginDrawing();
    ClearBackground(DBlue);
    grid.draw();
    EndDrawing();
}
CloseWindow();
}