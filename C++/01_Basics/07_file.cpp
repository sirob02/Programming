#include<iostream>
#include<fstream>

using namespace std;

int main(){

    fstream file;
    file.open("test.txt",ios::app);


    file << "das soll der Text sein";
    file.close();

    return 0;
}