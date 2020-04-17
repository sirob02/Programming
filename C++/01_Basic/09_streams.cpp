#include<iostream>
#include<cstring>
#include<sstream>


using namespace std;

int main(){
    
    //Variables
    string name;
    int tmp;
    int age;
    string number = "50";

    //taking input
    cout << "Hello there, Whats your name? \n";
    cin >> name;
    cout << "Your Age?\n";
    cin >> age;

    //Output normal
    cout << "Your name is " << name << " age "<< age<< "\n";

    //convert string -> int 
    istringstream iStream(number); 
    iStream >>  tmp;
    cout << "Converted string "<< tmp << "\n";

    //Convert int -> string 
    ostringstream oStream;
    oStream << tmp;
    number = oStream.str();
    cout << "Converted number "<< number << "\n";


    


    return 0;
}