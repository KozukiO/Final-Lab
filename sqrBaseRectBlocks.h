#ifndef sqrBaseRectBlocks_h
#define sqrBaseRectBlocks_h
#include "rectBlocks.h"

class sqrBaseRectBlocks : public rectBlocks{
    public:
    int width = height;
};
vector<sqrBaseRectBlocks>* fillSqrBlocks();
#endif