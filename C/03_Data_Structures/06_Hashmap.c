/**
 *  @author Robert Simon
 * 
 *  @title: HAshmap
 * 
 * 
 *          Array
 *          0   -> 232
 *          1   -> 434 ->  34
 *          2   -> 323 -> 433 -> 32
 *          3
 *          4   -> 234
 *          5   ->   2
 * 
 * 
 */ 

#include<stdlib.h>
#include<stdio.h>

int size=10;

struct node{
    int key;
    struct node *next;

};
struct tableNode{
    int key;
    struct node *next;
    struct tableNode *next_T;
};
struct table{
    struct tableNode *top;

};

typedef struct node node;
typedef struct tableNode tableNode;
typedef struct table table;

//functions
int hashCode(int key);
table* iniHashtable(int size);
void printTable(table *hashtable,int size);
void add(table *hashtable, int key);
void removeKey(table *hashtable, int key);

int main(){

    table *hashtable = iniHashtable(size);
    printTable(hashtable,size);
    int firstKey = 5;
    add(hashtable,firstKey);
    printTable(hashtable,size);
    removeKey(hashtable,5);

    return 0;
}

//calculate the Hashcode
int hashCode(int key){
   return key % size;
}
//add key
void add(table *hashtable, int key){
    int place = hashCode(key);

    tableNode *currentY = hashtable->top;

    //iterate Y
    while (currentY){
        if (currentY->key == place){
            //Error check if first Element
            if (!currentY->next){
                node* newNode = (node*)malloc(sizeof(node));
                newNode->key = key;
                newNode->next = NULL;
                currentY->next = newNode;
                return; 
            }
            
            //iterate X
            node *currentX = currentY->next;
            while (currentX->next){
                currentX=currentX->next;
            }
            node* newNode = (node*)malloc(sizeof(node));
            newNode->key = key;
            newNode->next = NULL;
            currentX->next= newNode;
            
        }
        currentY=currentY->next_T;
    }  

}

void removeKey(table *hashtable, int key){
    int place = hashCode(key);

    tableNode *currentY = hashtable->top;

    //iterate Y
    while (currentY){
        if (currentY->key == place){       
            //Error check
            if (!currentY->next){
                printf("Error: Element not found!");
                return;
            }
            //iterate X
            node *currentX = currentY->next;
            while (currentX->next->key != key){
                currentX=currentX->next;
            }
            //Error check
            if (currentX->next->key != key ){
                printf("Error2: Element not found!");
                return;
            }
            node* tmp = currentX->next;
            currentX->next= tmp->next;
            free(tmp);
            
        }
        currentY=currentY->next_T;
    }  




}

//initalise the hashtable
table* iniHashtable(int size){
    //hashtable
    table *hashtable= (table*)malloc(sizeof(table));
    hashtable->top= (tableNode*)malloc(sizeof(tableNode));
    //first node
    hashtable->top->key = 0; 
    hashtable->top->next = NULL;

    tableNode *tmp =hashtable->top; 

    //all table Nodes
    for (int i = 1; i < size; i++){
        tableNode *new = (tableNode*)malloc(sizeof(tableNode));
        new->next=NULL;
        new->key=i;

        //put in order
        tmp->next_T=new;
        tmp=new;
    }
    tmp->next_T= NULL;

    return hashtable;
}

void printTable(table *hashtable,int size){

        tableNode *currentY = hashtable->top;

        //iterate Y
        while (currentY){
            printf(" %d ->",currentY->key);

            //iterate X
            node *currentX = currentY->next;
            while (currentX){
                printf(" %d ->",currentX->key);
                currentX=currentX->next;
            }
            printf("\n");
            currentY=currentY->next_T;
        }
        printf("\n");
}
