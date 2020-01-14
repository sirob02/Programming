/**
 *  @author Robert Simon
 * 
 *  @title: HAshmap
 * 
 * 
 *          Array
 *          0   -> 232
 *          1   ->  434 -> 34
 *          2   -> 323 ->   433 ->32
 *          3
 *          4   ->234
 *          5   ->2
 * 
 * 
 */ 

#include<stdlib.h>
#include<stdio.h>

//functions
int hashCode(int key);
int iniHashtable(int size);
void printTable(int *table,int size);


int main(){

    int size = 10;
    int *hashtable = iniHashtable(size);
    printTable(hashtable,size);



    return 0;
}

//caculate the Hashcode
int hashCode(int key){
   return key % 10;
}

//initalise the hashtable
int *iniHashtable(int size){
    
    int *hashtable= (int*)calloc(size,sizeof(int));
    
    for (int i = 0; i < size; i++){
        *(hashtable+i)=i;
    }

    return hashtable;
}

void printTable(int *table,int size){
    

    for (int y = 0; i < size; i++){
        for (int x= 0; i < count; i++)
        {
            /* code */
        }
        
    }
    
}