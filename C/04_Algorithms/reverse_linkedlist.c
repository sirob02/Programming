/**
 * @author Robert Simon
 * 
 * @title how to reverselinked List
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
node* reverse(node *head);


int main(){

    node *first = iniList(10);
    
    addNodeLast(first,11);
    addNodeLast(first,12);
    addNodeLast(first,13);
    
    printList(first);
    first=reverse(first);
    printList(first);


   return 0;  
}

node* reverse(node *head){

    node *prev = NULL;
    node *curr = head;
    node *next = NULL;

    while (curr != NULL) {
        //take next of current
        next = curr->next;
        //reverse
        curr->next = prev;
        //take individual next
        prev=curr;
        curr=next;
    }
    head=prev;


    return head;
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
    printf("NULL \n");

}

node* iniList(int value){
    node *first = (node*)malloc(sizeof(node));
    first->value = value;
    first->next=NULL;

    return first;
}