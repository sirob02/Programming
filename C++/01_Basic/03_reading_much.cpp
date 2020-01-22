/**
 *  @author: Robert Simon
 * 
 *  @title: zeichenweise einlesen
 */ 

#include<iostream>
using namespace std;

int main(){

    int wert;
    cout << "Bitte geben Sie etwas ein: \n";
    
    // end with strg + z oder strg +d
    while ( (wert = cin.get()) != EOF )
    {
        cout << (char)wert; 
    }
     



    return 0;
}