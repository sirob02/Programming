/**
 *  @author Robert Simon
 * 
 *  @title: switch statement
 * 
 */ 
#include<iostream>
using namespace std;

int main(){
    int wert;
    cout << "Print a numbert 0-5: \n";

    cin >> wert;
    
    switch (wert)
    {
    case 1:
        cout << "1 - Germany";
        break;
    case 0:
        cout << "0 - England";
        break;
    case 2:
        cout << "2 - Poland";
        break;
    case 3:    
        cout << "3 - Netherlands";
        break;
    case 4:
        cout << "4 - Austria";    
        break;
    case 5:
        cout << "5 - France";    
    }

    return 0;
}

