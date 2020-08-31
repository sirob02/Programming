#include<iostream>

using namespace std;

void sum(int a, int b){
    cout << "sum of " << a << b << " is " << a+b << "\n";
}
void sum(int a, int b,int c){
    cout << "sum of " << a << b << c << " is " << a+b+c << "\n";
}

int main(){
    sum(1,2);
    sum(1,2,3);

    return 0;
}