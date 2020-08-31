#include<stdio.h>

int main(){

    int i = 9;

    if( i < 10){
        goto jump;
    }

    i = i*i;

jump:
    printf("i is %d\n",i);

    return 0;
}