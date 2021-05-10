#ifndef cylindricalBlocks_h
#define cylindricalBlocks_h
#include "sqrBaseRectBlocks.h"

class cylindricalBlocks : public sqrBaseRectBlocks{
    public:
    int diameter = width = height;
    double Area;
    double volume;
    void setArea();
    void setVolume();
    double getArea();
    double getVolume();
};
vector<cylindricalBlocks> fillcylindricalBlocks(vector<cylindricalBlocks> vectorofcylindricalBlocks);
#endif