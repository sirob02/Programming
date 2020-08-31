#include<stdio.h>

int main(){

    int a = 10, b = 5;
    int tmp;

    printf("A ist %d, B ist %d\n",a,b);

    tmp = a;
    a = b;
    b = tmp;

    printf("A ist %d, B ist %d\n",a,b);


    return 0;
}