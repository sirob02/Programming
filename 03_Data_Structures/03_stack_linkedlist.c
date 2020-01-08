/**
 * @author Robert Simon
 * 
 *  @title: stack with linked list
 * 
 *  +---+   +---+   +---+
 *  | 3 |-->| 2 |-->| 1 |--> NULL
 *  +---+   +---+   +---+   
 *  
 * 
 */ 
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>



struct Stack{
    int item;
    struct Stack *next;
};

//functions
struct Stack *createStack(int item); 
struct Stack *push(struct Stack *stack, int item);
struct Stack *pop(struct Stack *stack);
struct Stack *peek(struct Stack *stack);


int main(){

    struct Stack *stack = createStack(10);

    printf("%d ist das oberstes Item\n",stack->item);
    stack = push(stack,20);
    printf("%d ist das oberstes Item\n",stack->item);
    stack = push(stack,30);
    printf("%d ist das oberstes Item\n",stack->item);
    stack = push(stack,40);
    printf("%d ist das oberstes Item\n",stack->item);

   // peek(stack);

    stack = pop(stack);
    printf("%d ist das oberstes Item\n",stack->item);
    stack = pop(stack);
    printf("%d ist das oberstes Item\n",stack->item);
    stack = pop(stack);
    printf("%d ist das oberstes Item\n",stack->item);
    stack = pop(stack);

    

    return 0;
}

struct Stack *createStack(int item){

    struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack)); //creating 1 Stack
    stack->item = item;
    stack->next = NULL;
    return stack; 
}


struct Stack *push(struct Stack *stack, int item){ 
    
    //Error check
    if (!stack){ 
        perror("Error Stack is empty"); 
    }  
    
    //push
    struct Stack *newStack = (struct Stack*)malloc(sizeof(struct Stack)); //creating 1 Stack
    newStack->item = item;
    newStack->next = stack;

    return newStack; 

} 
  
struct Stack *pop(struct Stack* stack) { 
    
    //Error check
    if (!stack){
        perror("Error: Stack is empty");
    }

    //pop
    struct Stack *newStack = (struct Stack*)malloc(sizeof(struct Stack)); //creating 1 Stack
    newStack = stack->next;
    free(stack);
   
    return newStack; 
} 
  
