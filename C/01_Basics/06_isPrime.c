#include<stdio.h>

int main(){

    int num;

    printf("Please enter a number: ");

    scanf("%d",&num);

    for(int i = 2; i< num+1/2; i++){
        if(num % i == 0){
            printf("Not prime!\n");
            return 0;
        }
    }
    printf("is a Prime number\n");


    return 0;
}