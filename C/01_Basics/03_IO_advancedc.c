#include<stdio.h>


int main(){


    char buf[10];

    printf("Please enter a String!\n");

    fgets(buf,9,stdin);

    printf("You entered: %s \n",buf);

    return 0;
}