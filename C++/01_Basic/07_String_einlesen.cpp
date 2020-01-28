#include <iostream>
using namespace std;
int main(void) {
    char carray[80];
    
    cout << "Bitte Eingabe machen : ";
    cin.getline( carray, sizeof(carray) );
    cout << "Ihre Eingabe:\n" << carray << '\n';
    
    return 0;
}