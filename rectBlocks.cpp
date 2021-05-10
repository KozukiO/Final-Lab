#include "rectBlocks.h"
using namespace std;


// Constructor - The default values are specified in the declaration
rectBlocks :: rectBlocks(int width, int height, int length): width(width),height(height),length(length){  }
// Getters
int rectBlocks :: getWidth() const { return width; } 
int rectBlocks :: getHeight() const { return height; }
int rectBlocks :: getLength() const { return length; }
// Setters
void rectBlocks::setWidth(int width) { this->width = width; }
void rectBlocks::setHeight(int height) { this->height = height; } 
void rectBlocks::setLength(int length) { this->length = length; }



vector<rectBlocks> fillBlocks(){
    vector<rectBlocks> vectorofBlocks;
    ifstream inputBlockData;
    inputBlockData.open("dataBlocks.dat");
    int w,h,l;
    while (inputBlockData >> w >> h >> l){
        rectBlocks b;
        b.setWidth(w);
        b.setHeight(h);
        b.setLength(l);
        vectorofBlocks.push_back(b);
        }
        return vectorofBlocks;
        }



















/*
// Constructor - The default values are specified in the declaration
rectBlocks :: rectBlocks(int width, int height, int length): width(width),height(height),length(length){  }
// Getters
int rectBlocks :: getWidth() const { return width; } 
int rectBlocks :: getHeight() const { return height; }
int rectBlocks :: getLength() const { return length; }
// Setters
void rectBlocks::setWidth(int width) { this->width = width; }
void rectBlocks::setHeight(int heigth) { this->height = height; } 
void rectBlocks::setLength(int length) { this->length = length; }

// Public Functions
void rectBlocks :: print() const {
cout << getWidth()  << getHeight() << getLength() << endl;
}

void rectBlocks :: populate(){
    ifstream inputdataBlocks;
    inputdataBlocks.open("dataBlocks.dat");
    int w,h,l;
    while (inputdataBlocks >> w >> h >> l){
        rectBlocks b;
        b.setWidth(w);
        b.setHeight(h);
        b.setLength(l);
        vectorofblocks.push_back(b);
}
for (int i=0; i<3;i++){
    cout << vectorofblocks[i].getWidth() << vectorofblocks[i].getHeight()<< vectorofblocks[i].getLength() << endl; 
}
inputdataBlocks.close();
}














/*oid rectBlocks :: populate(){
ifstream inputdataBlocks;
inputdataBlocks.open("dataBlocks.dat");
int blockWidth,blockHeight,blockLength;
while (inputdataBlocks >> blockWidth >> blockHeight >> blockLength){
        rectBlocks block1(int blockWidth,int blockHeight,int blockLength); 
        vectorofblocks.push_back(block1);
}
}

/* void rectBlocks :: readBlocks(){
    inputdataBlocks.open("dataBlocks.dat");
    int blockWidth,blockHeight,blockLength;
    //Read coordinate value
    while (inputdataBlocks >> blockWidth >> blockHeight >> blockLength ){
        block b;
        b.width=blockWidth;
        b.height=blockHeight;
        b.length = blockLength;
        vectorofblocks.push_back(b);
        }
        for (unsigned i=0; i<sizeof(vectorofblocks);i++){
            cout << vectorofblocks[i].width << vectorofblocks[i].height<< vectorofblocks[i].length << endl;
        }
        }; */


          

