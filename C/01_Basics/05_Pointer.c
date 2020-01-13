/**
 * @author Robert Simon
 * 
 * @title using Pointer
 * 
 */ 

#include<stdio.h>

//functions
void callByValue(int x);
void callByReference(int *x);



int main(void){

    //Variables
    int x = 10 ;

    printf(" x: %d zu beginn\n ",x);

    callByValue(x);

    printf("x: %d nach call by Value\n ",x);

    callByReference(&x);

    printf("x: %d  nach call by Reference\n ",x);

    return 0;
}

void callByValue(int x){
    x++;
    printf("x: %d in call by Value\n ",x);
}



void callByReference(int *x){
    (*x)++;
    printf("x: %d in call by Value\n ",*x);
}

