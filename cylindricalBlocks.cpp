#include <cmath>
#include <algorithm>
#include "cylindricalBlocks.h"
#include "sqrBaseRectBlocks.h"
using namespace std;


void cylindricalBlocks :: setArea(){
    double eq1;
    double eq2;
    double Area;
    eq1= M_PI*height;
    eq2= (height/2)+length;
    Area = eq1*eq2;
    this->Area = Area;
}


void cylindricalBlocks :: setVolume(){
    double eq1;
    double eq2;
    double Area;
    eq1 = length*M_PI;
    eq2 = (height/2)*(height/2);
    volume = eq1*eq2;
    this->volume = volume;
}

double cylindricalBlocks :: getVolume(){
    return volume;
}

double cylindricalBlocks :: getArea(){
    return Area;
}


vector<cylindricalBlocks> fillcylindricalBlocks(vector<cylindricalBlocks> vectorofcylindricalBlocks){
    ifstream inputBlockData;
    inputBlockData.open("dataBlocks.dat");
    int w,h,l;
    while (inputBlockData >> w >> h >> l){
        cylindricalBlocks b;
        if (w == h){
        b.setWidth(w);
        b.setHeight(h);
        b.setLength(l);
        b.setArea();
        b.setVolume();
        vectorofcylindricalBlocks.push_back(b);
        }
        else{
            continue;
        }}
        return vectorofcylindricalBlocks;
        }

        
