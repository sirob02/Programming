#include<stdio.h>

int main(){

    int num = 30;

    printf("Enter a number: ");

    scanf("%d",&num);
    // scanf("%d",&num);

    for(int i = 1; i < num+1/2; i++ ){
        if(num % i == 0){
            printf(" %d ",i);
        }
    }


    return 0;
}