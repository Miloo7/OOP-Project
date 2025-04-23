#include<iostream>
#include "grid.h"
#include<vector>
#include "colors.h"


Grid::Grid()
{
    rowN=20;
    colN=10;
    cSize=30;
    intialize();
    colors = GetCColors();
}

void Grid::intialize()
{
    for(int row=0;row<rowN;row++){
        for(int col=0;col<colN;col++){
            grid[row][col] = 0;
        }
    }
}

void Grid::print()
{
    for(int row=0;row<rowN;row++){
        for(int col=0;col<colN;col++){
            std::cout<< grid[row][col]<<" ";           
        }
        std::cout<<std::endl;
    } 
}



void Grid::draw()
{
    for(int row=0;row<rowN;row++){
        for(int col=0;col<colN;col++){
            int cellVal = grid[row][col];
            DrawRectangle(col*cSize+1,row*cSize+1,cSize-1,cSize-1,colors[cellVal]);
        }
    }     
}
