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

struct table_node{
    int key;
    struct node *next;
    struct table_node *nextTableNode;
};

struct node{
    int key;
    struct node *next;
};


struct table{
    struct table_node *first;
};


typedef struct node node;
typedef struct table table;
typedef struct table_node table_node;


//functions
int hashCode(int key);
table *iniHashtable(int size);
void printTable(table *table);


int main(){

    table *hashtable = iniHashtable(10);
    printTable(hashtable);



    return 0;
}

//caculate the Hashcode
int hashCode(int key){
   return key % 10;
}

table *iniHashtable(int size){
    table *hashtable= (table*)malloc(sizeof(table));

    hashtable->first = (table_node*)malloc(sizeof(table_node));
    hashtable->first->key = 0;
    hashtable->first->next = NULL;

    table_node *tmp=hashtable->first->nextTableNode;
    for (int i = 1; i < size; i++){
        table_node *newNode = (table_node*)malloc(sizeof(table_node));
        newNode->key=i;
        newNode->next = NULL;
        
        tmp->nextTableNode =newNode;
        tmp=newNode;
    }
    
    return hashtable;
}

void printTable(table *table){
    table_node *currentY = table->first;

    while (!currentY->nextTableNode){

        printf(" %d ->",currentY->key);
        node *currentX = currentY->next;
        
        while (!currentX->next){
            printf(" %d ->", currentX->key);
            currentX=currentX->next;
        }
        printf("\n");
        
        currentY=currentY->nextTableNode;       
    }
}