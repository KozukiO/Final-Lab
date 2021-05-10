#ifndef cuboidBlocks_h
#define cuboidBlocks_h
#include "sqrBaseRectBlocks.h"

class cuboidBlocks : public sqrBaseRectBlocks{
    public:
    int width = length = height; 
};
vector<cuboidBlocks>* fillcuboidBlocks();
#endif



