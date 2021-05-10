#include <cmath>
#include <algorithm>
#include "sphericalBlocks.h"
using namespace std;

void sphericalBlocks :: setVolume(){
    double eq1 = 4.0/3 * M_PI;
    double eq2 = (height/2)*(height/2)*(height/2);
    double volume= eq1*eq2;
    this->volume = volume;
} 

void sphericalBlocks :: setArea(){
    double eq1 = 4* M_PI;
    double eq2 = (height/2)*(height/2);
    double Area = eq1*eq2;
    this-> Area = Area;
}

double sphericalBlocks :: getArea(){
    return Area;
}

double sphericalBlocks :: getVolume(){
    return volume;
}



vector<sphericalBlocks> fillsphericalBlocks(vector<sphericalBlocks> vectorofsphericalBlocks){
    ifstream inputBlockData;
    inputBlockData.open("dataBlocks.dat");
    int w,h,l;
    while (inputBlockData >> w >> h >> l){
        sphericalBlocks b;
        if (w == h && w==l){
        b.setWidth(w);
        b.setHeight(h);
        b.setLength(l);
        b.setArea();
        b.setVolume();
        vectorofsphericalBlocks.push_back(b);
        }
        else{
            continue;
        }}
        return vectorofsphericalBlocks;
        }
