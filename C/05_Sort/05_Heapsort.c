/**
 *             @author: Robert Simon
 *             @title: Heap sort   
 * 
 */ 
#include<stdio.h>



//functions
void swap(int *a,int *b);
void Heapsort(int *array,int array_count);
void printArray(int *array,int array_count);
void heapify(int *arr, int array_count, int i);

int main(){

    int array_count =10;
    int array[array_count];

    for (int i = 0; i < array_count; i++){
        int zahl =rand()%100;
        array[i]=zahl;
    }

    printArray(array,array_count);
    Heapsort(array,array_count);
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
void heapify(int *arr, int array_count, int i){
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < array_count && arr[l] > arr[largest]){ 
        largest = l; 
    }
  
    // If right child is larger than largest 
    if (r < array_count && arr[r] > arr[largest]){
        largest = r; 
    }
    // If largest is not root 
    if (largest != i){ 
        swap(&arr[i], &arr[largest]); 
  
        // Recursively heapify the affected sub-tree 
        heapify(arr, array_count, largest); 
    } 
}

void Heapsort(int *array,int array_count){

    // Build heap  
    
    for (int i = (array_count / 2) - 1  ; i >= 0; i--) 
        heapify(array, array_count, i); 
  
    // One by one extract an element from heap 
    
    for (int j =array_count-1; j>=0 ; j--) 
    { 
        // Move current root to end 
        swap(&array[0], &array[j]); 
  
        // call max heapify on the reduced heap 
        heapify(array, j, 0); 
    } 

}




