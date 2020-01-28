#include<stdio.h>

//function
int binarySearch(int *arr,int len,int x);
void printArray(int *arr,int len);

int main(){

    int arr[5] = {1,2,3,4,5};
    int arr_count = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,arr_count);

    int elem = binarySearch(arr,arr_count,3);

    if (elem == -1){
        printf("Elem not found\n");
    }

    printf("Elem %d found\n",elem);
    
    return 0;
}

void printArray(int *arr,int len){
    printf("Array: ");

    for (int i = 0; i < len; i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");

}


int binarySearch(int *arr,int len,int x){

    int l = 0;
    int r = len-1;

     while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        // Check if x is present at mid 
        if (arr[m] == x){ 
            return x; 
        }    
        // If x greater, ignore left half 
        if (arr[m] < x){ 
            l = m + 1; 
        }
        // If x is smaller, ignore right half 
        r = m - 1; 
    } 

    return -1; 
}