#include<stdio.h>

int main(){

    int ar[] = {1,2,3,5,6,7,8,9};

    int arLen = sizeof(ar)/sizeof(ar[0]);

    for(int i = 0; i < arLen; i++){
        printf("pos %d ist %d \n",i,ar[i]);
    }



    return 0;
}