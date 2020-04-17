#include<iostream>
#include<string>

using namespace std;

class Tier{
    public:
    void wieMachtDasTier(){
        cout << "Hallo, ich bin ein Tier"<< "\n";
    }


};

class Hund: public Tier{
    private:
        string name;
    public:
    Hund(string name){
        this->name = name;
    } 
        


};

int main(){
    Hund Ace("ace");
    Ace.wieMachtDasTier();


    return 0;
}