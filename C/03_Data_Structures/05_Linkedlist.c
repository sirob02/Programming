/**
 * @author Robert Simon
 * 
 * @title linked List
 * 
 */ 
#include<stdio.h>
#include<stdlib.h>


struct node{
    int value;
    struct node *next;
};

//typedef
typedef struct node node;

//functions
void addNodeLast(node *first,int value);
void printList(struct node *first);
node* iniList(int value);


int main(){

    node *first = iniList(10);
    
    addNodeLast(first,11);
    addNodeLast(first,12);
    addNodeLast(first,13);
    
    printList(first);


   return 0;  
}

//add
void addNodeLast(struct node *first,int value){

    //new
    node *newNode = (node*)malloc(sizeof(node));
    newNode->value = value;
    newNode->next=NULL;
    
    node *current = first;
    while (current->next){
        current=current->next;
    }

    current->next=newNode;
}


void printList(struct node *first){

    node *current= first;

    while (current){
        printf("%d -> ",current->value);
        current=current->next;
    }
    printf("NULL ");

}

node* iniList(int value){
    node *first = (node*)malloc(sizeof(node));
    first->value = value;
    first->next=NULL;

    return first;
}