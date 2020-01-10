/**
 *      @author: Robert Simon
 * 
 *      @title: Variadic functions can get multiple input values
 * 
 */ 

#include<stdio.h>
#include<stdarg.h>

//functions
void sumOf(int count ,...);


int main(){

    sumOf(2,1,3);

    sumOf(5,2,3,4,5,6);
    
    sumOf(8,2,3,4,5,6,7,8,9);

    return 0;
}

void sumOf(int count ,...){

    int sum;

    va_list args;

    va_start(args,count);

    for (int i = 0; i < count; i++){
        
        int tmp = va_arg(args,int);

        sum +=tmp;

        printf(" %d ",tmp);

    }
    

    printf(" Sum is: %d\n", sum);

}