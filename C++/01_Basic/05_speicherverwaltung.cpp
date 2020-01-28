/**
 *  @author Robert Simon
 *  
 *  @title: using new and delete
 */ 
#include<iostream>
using namespace std;

int main(void){

    int *ptr = new int[100];
    *ptr=10;
    *(ptr+1) = 30;

    cout << "Value of ptr is: " << *ptr << "\n";
    cout << "Value of ptr + 1 is: " << *(ptr+1) << "\n";

    cout << "Adress of ptr is: " << &ptr << "\n";

    delete []ptr;


    return 0;
}
