/**
 *      @author: Robert Simon
 * 
 *      @title:  two dimensional array with Pointer
 * 
 */ 
#include<stdio.h>
#include<stdlib.h>

//functions
void printArray(int **array,int xLen,int yLen);


int main(){

    int len=5;

    /**creating array with pointer
     * 
     *     arr: *        
     *          *        y
     *          *
     */                        
    
    int **arr = (int**)calloc(len,sizeof(int*));

    /**looping throught array and allocating 2. dimension
     *             x
     *      arr: * * *  
     *           * * *  y
     *           * * *
     */ 
    for(int i=0 ; i<len ; i++ ){
        *(arr+i) = (int*)calloc(len,sizeof(int));
    }

    arr[1][2] = 1;
    arr[len-1][len-1] = 2;

    printArray(arr,len,len);

    return 0;
}


void printArray(int **array,int xLen,int yLen){

    for (int y = 0; y < yLen ; y++){
        for (int x = 0; x < xLen; x++){
            
            if (x == xLen-1){
                printf(" %d\n", *(*(array+x)+y) );
                break;
            }
            printf(" %d ",*(*(array+x)+y) );

        }

    }

}