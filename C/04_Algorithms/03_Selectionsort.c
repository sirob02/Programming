/**
 *             @author: Robert Simon
 *             @title: Selectionsort
 * 
 * 
 */ 
#include<stdio.h>
#include<stdlib.h>

//functions
void swap(int *a,int *b);
void selectionsort(int *array,int array_count);
void printArray(int *array,int array_count);

int main(){

    int array_count =10;
    int array[array_count];

    for (int i = 0; i < array_count; i++){
        int zahl =rand()%100;
        array[i]=zahl;
    }

    printArray(array,array_count);
    selectionsort(array,array_count);
    printArray(array,array_count);
    


    return 0;
}

void printArray(int *array,int array_count){

    for (int i = 0; i < array_count; i++){
        printf(" %d ",array[i]);
    }
    printf("\n");

} 

void swap(int *a,int *b){
    
    int tmp = *(a);
    *(a) = *(b);
    *(b) = tmp;

}

void selectionsort(int *array,int array_count){

    // number of complete Array Loops 
    for (int i = 0; i < array_count-1; i++){
        int minIndex = i;

        //loop array and find the actual minimum
        for (int j = i+1; j < array_count; j++){
            if ( *(array+minIndex) > *(array+j)){
                   minIndex=j;
            }
        }
        swap(&array[minIndex],&array[i]);
    }
}




