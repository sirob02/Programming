/**
 *  @author: Robert Simon
 *  
 *  @title: Reading Input from the Terminal
 *  
 */ 

#include<stdio.h>

int main(){

//Variables
    char str[100];
    int i;

//reading input
    printf("Enter a value:");
    scanf("%s %d",str,&i);

//displaying Input
    printf("\n You entered: %s %d \n",str,i);    

    return 0;
}