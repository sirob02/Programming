#include<stdio.h>


int main(){

    int num;

    printf("Enter s number:");
    scanf("%d",&num);

    switch (num){
    case 10:
        printf("Numer is 10!\n");
        break; 
    default:
        printf("Number is not 10!\n");
        break;
    }

    return 0;
}