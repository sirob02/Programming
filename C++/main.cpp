#include<iostream>

using namespace std;

int main(){

    vector<int> v;
    for(int i = 0; i < 4; i++){
        cin >> v.append(i);
    }

    printf("%d \n", v[0]);



    return 0;
}