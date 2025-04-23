#include "block.h"
#include <vector>

Block::Block()
{
    cellSize=30;
    rotState=0;
    colors = GetCColors();
}

void Block::draw()
{
    std::vector<Position> tiles = cells[rotState];
    for(Position item: tiles){
        DrawRectangle(item.col* cellSize + 1,item.row * cellSize + 1,cellSize-1,cellSize-1,colors[id]);
    }
}