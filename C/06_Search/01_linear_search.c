#include<stdio.h>

//function
int linearSearch(int *arr,int len,int x);
void printArray(int *arr,int len);

int main(){

    int arr[5] = {1,2,3,4,5};
    int arr_count = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,arr_count);

    int elem = linearSearch(arr,arr_count,3);

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


int linearSearch(int *arr,int len,int x){

    for(int i = 0; i< len; i++){
        if (arr[i] == x){
            return x;
        }
    }


    return -1; 
}