/**
 *         @author Robert Simon
 * 
 *          @title: Queue First in First Out     
 * 
 * 
 *              Queue
 * 
 * 
 *         first        last
 *       +---+   +---+   +---+
 *       | 3 |-->| 2 |-->| 1 |-> NULL
 *       +---+   +---+   +---+  
 *      remove             add
 */ 

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


struct Queue{
    struct Node *first;
    struct Node *last;
};

struct Node{
    int item;
    struct Node *next;
};

//functions
struct Queue *createQueue(int item);
void add(struct Queue *queue, int item);
void removeNode(struct Queue *queue);
void printQueue(struct Queue *queue);

int main(){

    struct Queue *queue = createQueue(10);

    add(queue,20);
    add(queue,30);


    printQueue(queue);

    removeNode(queue);
    removeNode(queue);
    printQueue(queue);
    removeNode(queue);
    printQueue(queue);


    return 0;
}

struct Queue *createQueue(int item){
        //create Node
        struct Node *node = (struct Node*) malloc(sizeof(struct Node));
        node->item =item;
        node->next = NULL;

        //create Queue
        struct Queue  *newQueue = (struct Queue*) malloc(sizeof(struct Queue));
        newQueue->first = node;
        newQueue->last = node;

        return newQueue;
}

void add(struct Queue *queue, int item){
        //create Node
        struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->item =item;
        newNode->next = NULL;

        // no item in queue
        if (!(queue->first && queue->last)){
            queue->first = newNode;
            queue->last = newNode;
            printf("add: %d \n",queue->last->item);
            return;
        }

        //add in Queue
        queue->last->next = newNode;
        queue->last = newNode;

        printf("add: %d \n",queue->last->item);
}

void removeNode(struct Queue *queue){

        // last item in queue
        if (queue->first == queue->last){
            queue->last = NULL;
            
            printf("remove: %d \n",queue->first->item);
            
            free(queue->first);
            queue->first = NULL;

            return;
        }

        //hold 2. node
        struct Node *tmpNode = (struct Node*) malloc(sizeof(struct Node));
        tmpNode = queue->first;

        printf("remove: %d \n",tmpNode->item);

        //add 2. node as first
        queue->first=queue->first->next;

        //remove first Node
        free(tmpNode);


        
}

void printQueue(struct Queue *queue){

        //Error check
        if (!queue->first){
            printf("No Item in queue\n");
            return;
        }

        //Error check
        if (queue->first == queue->last){
            printf(" %d -> NULL\n",queue->first->item);
            return;
        }
        

        struct Node *tmpNode = (struct Node*) malloc(sizeof(struct Node));
        tmpNode = queue->first;

        while (tmpNode){
            if (!tmpNode->next){
                printf(" %d -> NULL\n",tmpNode->item);
                break;
            }
            printf(" %d ->",tmpNode->item);
            tmpNode=tmpNode->next;
        }
        free(tmpNode);
}