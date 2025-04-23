#include<iostream>
#include "grid.h"
#include<vector>

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

std::vector<Color> Grid::GetCColors()
{
    Color grey = {25,30,40,255};//empty cell
    Color green = {50,230,25,255};
    Color red = {235,20,20,255};
    Color orange = {223,115,20,255};
    Color yellow = {240,235,5,255};
    Color purple = {165,0,250,255};
    Color cyan = {21,204,209,255};
    Color brown = {140,70,20,255};

    return{grey,green,red,orange,yellow,purple,cyan,brown};
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
