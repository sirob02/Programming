/**
 *             @author: Robert Simon
 *             @title: Bubble sort   
 * 
 *          First Pass:
 *           ( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
 *           ( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4
 *           ( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2
 *           ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them
 * 
 * 
 */ 
#include<stdio.h>
#include<stdlib.h>


//functions
void swap(int *a,int *b);
void bubblesort(int *array,int array_count);
void printArray(int *array,int array_count);

int main(){

    int array_count =10;
    int array[array_count];

    for (int i = 0; i < array_count; i++){
        int zahl =rand()%100;
        array[i]=zahl;
    }

    printArray(array,array_count);
    bubblesort(array,array_count);
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

void bubblesort(int *array,int array_count){

    // number of complete Array Loops 
    for (int i = 0; i < array_count-1; i++){

        //one array Loop
        for (int j = 0; j < array_count-1; j++){
            if ( *(array+j) > *(array+j+1)){
                swap(&array[j],&array[j+1]);   
            }
            
            
        }
    
    }

}




