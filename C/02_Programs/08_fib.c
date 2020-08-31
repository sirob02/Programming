#include<stdio.h>

int fib(int num){
    
    if (num <= 2){
        return 1;
    }
    return fib(num-2)+fib(num-1);
}


int main(){

    int num = 4;

    int fibNum = fib(num);

    printf("Fibonacci von %d ist %d\n",num,fibNum);


    return 0;
}