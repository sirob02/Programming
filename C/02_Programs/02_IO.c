#include<stdio.h>

int main(){

    char buf[100];

    printf("Enter something: \n");

    scanf(" %[^\n]s ", buf);

    printf("You Entered: %s\n", buf);

    return 0;
}