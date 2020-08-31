#include<stdio.h>

int main(){

    int num = 22;
    const int div = 2;


    if (num % div){
        printf("%d is Odd \n",num);
    }else
    {
        printf("%d is Even \n",num);
    }
    
    


    return 0;
}