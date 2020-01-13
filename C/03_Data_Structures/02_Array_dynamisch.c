/**
 * @author Robert Simon
 * 
 * @title dynmaisches Arrays
 * 
 */ 

#include<stdio.h>
#include<stdlib.h>

int main(){
        
        //variables
        int size = 12;
        int *arr;

        //dynamisch machen 
        arr = (int*) calloc(size,sizeof(int));

        for (int i = 0; i < size; i++){
            printf("This is inside the array %i  posistion: %i\n",arr[i],i);
        }
        
        free(arr);
    return 0;
}