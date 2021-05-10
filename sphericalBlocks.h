#ifndef sphericalBlocks_h
#define sphericalBlocks_h
#include "cuboidBlocks.h"

class sphericalBlocks : public cuboidBlocks{
    public:
    int diameter = width = length;
    double Area;
    double volume;
    void setArea();
    void setVolume();
    double getArea();
    double getVolume();
};
vector<sphericalBlocks> fillsphericalBlocks();
#endif