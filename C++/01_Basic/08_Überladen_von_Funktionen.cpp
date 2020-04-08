#include<iostream>

using namespace std;


void test(int a,int b);
void test(int a, int b,int c);


int main(){

    int a = 10;
    int b = 20;
    int c = 30;

    test(a,b);
    test(a,b,c);



    return 0;
}



void test(int a,int b){

    cout <<  "a+b = " << a+b << "\n"; 


}


void test(int a,int b,int c){

    cout <<  "a+b+c = " << a+b+c << "\n";




}