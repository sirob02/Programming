#include<iostream>

using namespace std;

int fib(int n){
	if(n< 2){
		return n;
	}
	else
		return fib(n-1)+ fib(n-2);

}


int main(){

for(int i = 0; i < 100; i++){
	cout << i << " : " << fib(i)<< "\n";
}


return 0;
}
