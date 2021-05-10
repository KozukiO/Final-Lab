#include "sqrBaseRectBlocks.h"
#include "rectBlocks.h"
using namespace std;




vector<sqrBaseRectBlocks>* fillSqrBlocks(){
    vector<sqrBaseRectBlocks> vectorofSqrBlocks;
    ifstream inputBlockData;
    inputBlockData.open("dataBlocks.dat");
    int w,h,l;
    while (inputBlockData >> w >> h >> l){
        sqrBaseRectBlocks b;
        if (w == h){
        b.setWidth(w);
        b.setHeight(h);
        b.setLength(l);
        vectorofSqrBlocks.push_back(b);
        }
        else{
            continue;
        }}
        for (int i =0; i<vectorofSqrBlocks.size();i++){
            cout << vectorofSqrBlocks[i].getWidth() << vectorofSqrBlocks[i].getHeight()  << vectorofSqrBlocks[i].getLength() << endl;
        }
        vector<sqrBaseRectBlocks> *SquarePtr;
        SquarePtr = &vectorofSqrBlocks;
        return SquarePtr;
        } 














/*vector<sqrBaseRectBlocks>* fillSqrBlocks(const vector<rectBlocks> &vect){
    vector<rectBlocks> vectorofSqrBlocks;
    for(int i=0; i<vect.size(),i++){
        int a = vect[i].getHeight();
        if(int a = vect[i].length){
            rectBlocks temp = vect[i];
            vectorofSqrBlocks.push_back(temp);
        }
        else{
            i++;
        }
    }*/