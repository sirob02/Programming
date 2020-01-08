/**
 * @author Robert Simon
 * 
 *  @title: stack with dynamic array
 * 
 */ 
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

struct Stack {
    int top;
    int capacity;
    int *arr;
};

//functions
struct Stack *createStack(int capacity); 
bool isFull(struct Stack *stack);
bool isEmpty(struct Stack *stack);
void push(struct Stack *stack, int item);
void pop(struct Stack *stack);
void peek(struct Stack *stack);


int main(){

    struct Stack *stack = createStack(100);

    push(stack,10);
    push(stack,20);
    push(stack,30);

    peek(stack);

    pop(stack);
    pop(stack);
    pop(stack);



    
   // peek(stack);


    return 0;
}

struct Stack *createStack(int capacity) 
{ 
    struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack)); //creating 1 Stack
    stack->capacity = capacity; 
    stack->top = 0; 
    stack->arr = (int*)calloc(capacity, sizeof(int));           //Stack amount of places
    return stack; 
}

bool isFull(struct Stack *stack){
    if (stack->top == stack->capacity){
        return true;
    }
    return false;
}

bool isEmpty(struct Stack *stack){
    if (stack->top == 0){
        return true;
    }
    return false;
}

void push(struct Stack *stack, int item){ 
    
    //Error check
    if (isFull(stack)){ 
        perror("Error Stack is Full"); 
    }  
    
    //push
    stack->arr[stack->top] = item; 
    printf("%d wurde auf den Stack gelegt\n",stack->arr[stack->top]);
    stack->top++;
    
    
} 
  
void pop(struct Stack* stack) { 
    
    //Error check
    if (isEmpty(stack)){
        perror("Error: Stack is empty");
    }

    //pop
    printf("%d wurde vom stack entfernt\n",stack->arr[stack->top-1]); 
    stack->arr[stack->top];
    stack->top--; 
} 
  
void peek(struct Stack *stack){
    
    //Error check
    if (isEmpty(stack)){
        perror("Error: Stack is empty");
    }
    printf("%d ist das oberste Element\n",stack->arr[stack->top-1]);
}