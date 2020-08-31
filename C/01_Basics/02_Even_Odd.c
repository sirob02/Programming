#include<stdio.h>


int main(){

    int num;

    printf("Please enter a Number: ");

    scanf("%d",&num);

    if(num % 2){
        printf("\nOdd\n");
    }else
    {
        printf("\neven\n");
    }
    

    return 0;
}