#include<iostream>
#include<math.h>

using namespace std;

class Kreis{

private:
    float radius;
    
public:
    Kreis(float radius){
        this->radius=radius;
    }
    float flaeche(){
        return M_PI * radius *radius;
    }
    void setRadius(float radius){
        if (radius > 0){
        this->radius = radius;
            /* code */
        }
    }

    float getRaduis(){
        return radius;
    }


};



int main(){
    Kreis klein(10);
    cout << klein.flaeche() << "\n";
    Kreis *pointer = &klein;
    pointer->setRadius(-4);
    cout << klein.flaeche() << "\n";
    cout << klein.getRaduis() << "\n";

    return 0;
}