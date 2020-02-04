#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

//functions 
void parentP();
void childP();


int main(){

    pid_t pit = fork();
    
    if (pit == 0){
        childP();
    }else{
        parentP();
    }
    
    return 0;
}

void parentP(){
    int pid = getpid();
    printf("Hello from parent pid: %d\n",pid);

}

void childP(){
    int pid = getpid();
    int counter = 10;

    printf("Hello from child pid: %d\n",pid);

}