#include<stdio.h>
#include<stdlib.h>

int main(){

    int size = 10;

    int *ar = (int*)calloc(10,sizeof(int));

    for(int i = 0; i < size; i++){
        printf("pos: %d ist %d\n",i,ar[i]);
    }



    return 0;
}