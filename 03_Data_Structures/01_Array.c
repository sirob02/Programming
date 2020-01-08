/**
 * @author Robert Simon
 * 
 * @title Arrays
 * 
 */ 

#include<stdio.h>

int main(){

        int arr[10];

        arr[0]  = 0;
        arr[1]  = 1;
        arr[2]  = 2;
        arr[3]  = 3;
        arr[4]  = 4;
        arr[5]  = 5;
        arr[6]  = 6;
        arr[7]  = 7;
        arr[8]  = 8;
        arr[9]  = 9;

        for (int i = 0; i < 10; i++){
            printf("This is inside the array %i position: %i\n",arr[i],i);
        }
        
    return 0;
}