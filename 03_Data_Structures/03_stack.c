/**
 * @author Robert Simon
 * 
 *  @title: stack
 * 
 */ 
#include<stdlib.h>
#include<stdio.h>

struct Stack {
    int top;
    int capacity;
    int *arr;
};

//functions
struct Stack* createStack(int capacity); 
int isFull(struct Stack *stack);
int isEmpty(struct Stack *stack);
void push(struct Stack* stack, int item);
int pop(struct Stack* stack);
int peek(struct Stack* stack);

int main(){

    struct Stack* stack = createStack(100);

    push(stack,10);
    push(stack,20);
    push(stack,30);

    //printf("%d popped from stack\n", pop(stack));    
    //printf("%d popped from stack\n", pop(stack));
    
   // peek(stack);


    return 0;
}

struct Stack* createStack(int capacity) 
{ 
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); //creating 1 Stack
    stack->capacity = capacity; 
    stack->top = -1; 
    stack->arr = (int*)calloc(capacity, sizeof(int));           //Stack amount of places
    return stack; 
}

int isFull(struct Stack *stack){
    return stack->capacity-1;
}

int isEmpty(struct Stack *stack){
    return stack->top == -1;
}

void push(struct Stack* stack, int item){ 
    
    //no space
    if (isFull(stack)){ 
        return; 
    }  
    //sav Item
    stack->arr[stack->top++] = item; 
    printf("%d\n",stack->arr[1] );
} 
  
int pop(struct Stack* stack) { 
    if (isEmpty(stack)){
        perror("Error: Stack is empty");
    }
    //return and remove
    return stack->arr[stack->top--]; 
} 
  
// Function to return the top from stack without removing it 
int peek(struct Stack* stack) { 
    if (isEmpty(stack)){
        perror("Error: Stack is empty");
    } 
    //only return
    return stack->arr[stack->top]; 
}