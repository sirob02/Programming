#include<iostream>

using namespace std;

class Vektor{

private:

    
public:
    int x,y,z;
    const static int dimension;
    Vektor():x(0),y(0),z(0){}
    Vektor(int x,int y,int z):x(x),y(y),z(z){
    }

    void printVector()const{
        cout << "<"<< x << ","<< y<< ","<< z<< ">\n";
    }
    Vektor operator+(Vektor &b){
        return Vektor(x+b.x,y+b.y,z+b.z);

    }


};

const int Vektor::dimension=3;


int main(){
    
    Vektor a(1,2,3);
    a.printVector();
    Vektor b(4,5,6);
    b.printVector();
    Vektor c;
    c.printVector();
    c = a+b;
    c.printVector();
    cout << a.dimension << "\n";

    return 0;
}