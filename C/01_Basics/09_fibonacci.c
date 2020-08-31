#include<stdio.h>

int fib(int num){
    if(num < 3){
        return 1;
    }
    else{
        return fib(num-1) + fib(num-2);

    }
}


int main(){

    int num = 12;

    printf("fibonacci von %d ist %d \n",num,fib(num));

    return 0;
}