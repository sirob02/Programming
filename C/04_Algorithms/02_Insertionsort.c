/**
 * @AUTHOR ROBERT SIMON
 * @title Insertionsort
 * 
 * 
 */ 


#include<stdio.h>
#include<stdlib.h>


//functions
void insertionSort(int *array,int array_count);
void printArray(int *array,int array_count);

int main(){

    int array_count =10;
    int array[array_count];

    for (int i = 0; i < array_count; i++){
        int zahl =rand()%100;
        array[i]=zahl;
    }

    printArray(array,array_count);
    insertionSort(array,array_count);
    printArray(array,array_count);
    


    return 0;
}

void printArray(int *array,int array_count){

    for (int i = 0; i < array_count; i++){
        printf(" %d ",array[i]);
    }
    printf("\n");

} 

void insertionSort(int *array,int array_count){
    
    int i, key, j; 
    for (i = 1; i < array_count; i++) { 
        key = array[i]; 
        j = i - 1; 
  
        while (j >= 0 && array[j] > key) { 
            array[j + 1] = array[j]; 
            j -= 1; 
        } 
        array[j + 1] = key; 
    }
}