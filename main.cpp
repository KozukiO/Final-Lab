#include "rectBlocks.cpp"
#include "sqrBaseRectBlocks.cpp"
#include "cuboidBlocks.cpp"
#include "cylindricalBlocks.cpp"
#include "sphericalBlocks.cpp"
using namespace std;

bool sortByArea(cylindricalBlocks &a, cylindricalBlocks &b){
    //Diameter is equal to width in this case
    return a.getArea()<b.getArea();
}

bool sortByDiameter(sphericalBlocks &a, sphericalBlocks &b){
    // Width is equal to diameter in this instance
    return a.getWidth()<b.getWidth();
};


int main(){
    // Spherical Blocks sorting
    cout << "Spherical Blocks sorting" << endl;
    vector<sphericalBlocks> s,s1;
    s1 = fillsphericalBlocks(s);
    sort(s1.begin(),s1.end(),sortByDiameter);
    for(int i=0;i<s1.size();i++){
        cout << "Diameter: " << s1[i].getWidth() <<"   Spherical Surface Area: " << s1[i].getArea()
            <<"   Volume :"<< s1[i].getVolume() << endl ;
        }

    //Cylindrical Blocks sorting 
    cout <<"Cylindrical Blocks sorting"<<endl;
    vector<cylindricalBlocks> v,v1;
    v1 = fillcylindricalBlocks(v);
    sort(v1.begin(),v1.end(),sortByArea);
    for(int i=0;i<v1.size();i++){
        cout <<"Diameter: "<< v1[i].getWidth()  << "   Length:" << v1[i].getLength()
            <<"   Surface Area:"<< v1[i].getArea() << endl ;
        }
    return 0;
}  