#include<stdio.h>

struct book{
    int num;
    char *title;
};


int main(){

    struct book programming;

    programming.num = 10;
    programming.title = "Programming";


    printf("Book 1: %d %s\n",programming.num,programming.title);

    return 0;
}