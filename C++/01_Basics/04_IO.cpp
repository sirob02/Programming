#include<iostream>

using namespace std;

int main(){

    string s;
    cout << "Enter something: \n";
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        cout << "s: " << s[i] << "\n";
    }

    cout << "You entered: " << s << "\n";


    return 0;
}