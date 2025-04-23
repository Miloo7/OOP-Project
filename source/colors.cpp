#include "colors.h"
#include<vector>

const Color grey = {25,30,40,255};//empty cell
const Color green = {50,230,25,255};
const Color red = {235,20,20,255};
const Color orange = {223,115,20,255};
const Color yellow = {240,235,5,255};
const Color purple = {165,0,250,255};
const Color cyan = {21,204,209,255};
const Color brown = {140,70,20,255};

std::vector<Color> GetCColors()
{
    return{grey,green,red,orange,yellow,purple,cyan,brown};
}