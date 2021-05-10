#include "cuboidBlocks.h"
#include "sqrBaseRectBlocks.h"
using namespace std;


vector<cuboidBlocks>* fillcuboidBlocks(){
    vector<cuboidBlocks> vectorofcuboidBlocks;
    ifstream inputBlockData;
    inputBlockData.open("dataBlocks.dat");
    int w,h,l;
    while (inputBlockData >> w >> h >> l){
        cuboidBlocks b;
        if (w == h && h ==l){
        b.setWidth(w);
        b.setHeight(h);
        b.setLength(l);
        vectorofcuboidBlocks.push_back(b);
        }
        else{
            continue;
        }}
        for (int i =0; i<vectorofcuboidBlocks.size();i++){
            cout << vectorofcuboidBlocks[i].getWidth() << vectorofcuboidBlocks[i].getHeight()  << vectorofcuboidBlocks[i].getLength() << endl;
        }
        vector<cuboidBlocks> *CuboidPtr;
        CuboidPtr = &vectorofcuboidBlocks;
        return CuboidPtr;
        }
    

