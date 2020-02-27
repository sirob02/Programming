#include <stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main ( int argc, char *argv[] ){
    int i, pid;

printf("%d\n",getppid());
for(i = 0; i < 5; i++) {
    pid = fork();
    
    if(pid < 0) {
        printf("Error");
        exit(1);
    } else if (pid == 0) {
        printf("Child (%d): %d\n", i + 1, getpid());
        exit(0); 
    } else  {
        wait(NULL);
    }
}
printf("test");
return 0;
}   
