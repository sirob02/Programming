/**
 *             @author: Robert Simon
 *             @title: Heap sort   
 * 
 */ 
#include<stdio.h>



//functions
void swap(int *a,int *b);
void quickSort(int *array,int low, int high);
void printArray(int *array,int array_count);
int partition(int *arr, int low, int high);

int main(){

    int array_count =10;
    int array[array_count];

    for (int i = 0; i < array_count; i++){
        int zahl =rand()%100;
        array[i]=zahl;
    }

    printArray(array,array_count);
    quickSort(array,0,array_count-1);
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

/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
    array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
int partition(int *array, int low, int high){
    int pivot = array[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++){

        // If current element is smaller than the pivot 
        if (array[j] < pivot){ 
            i++;    // increment index of smaller element 
            swap(&array[i], &array[j]); 
        } 
    } 
    swap(&array[i + 1], &array[high]); 
    
    return (i + 1);
}

/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(int *array,int low,int high){
    
    if (low < high) { 

        int mid = partition(array, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(array, low, mid - 1); 
        quickSort(array, mid + 1, high); 
    }

}




