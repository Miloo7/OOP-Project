#pragma once
#include <vector>
#include<raylib.h>


class Grid{
    public:
        Grid();//Constructor
        void intialize();//grid initialize
        void print();//print grid
        void draw();
        int grid[20][10];//2d array of grid
    private:
        
        int rowN;//num of rows
        int colN;//num of cols
        int cSize;//cell size in pixels
        std::vector<Color> colors;
        std::vector<Color> GetCColors();
        
};