#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
#ifndef rectBlocks_h
#define rectBlocks_h



class rectBlocks{
    public:
    int width;
    int height;
    int length;
    rectBlocks(int width=0,int height=0,int length=0);
    int getWidth() const; 
    int getHeight() const;
    int getLength() const;
    void setWidth(int width); 
    void setHeight(int height);
    void setLength(int length);
};
vector<rectBlocks> fillBlocks();

#endif 

