/**
 *  @author Robert Simon
 * 
 *  @title: arrays
 */ 
#include <iostream>
using namespace std;
int main(void) {
    int var[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
   
    cout << "Gesamtgröße : " << sizeof(var) << " Bytes\n";
    cout << "Einzelgröße : " << sizeof(var[0])<< " Bytes\n";
    cout << "Anzahl Elemente : " << sizeof(var)/sizeof(var[0]) << '\n';

    return 0;
}