#include<stdio.h>

void func_1(int *num){

    printf("num ist: %d\n",*num);
}

void func_2(int ar[]){

    int len = sizeof(ar)/sizeof(ar[0]);

    for(int i = 0;i <= len; i++){
        printf("Pos: %d ist %d \n",i,ar[i]);
    }
}

int main(){

    int i = 10;
    int ar[] = {1,2,3};
    void *ptr;

    ptr = &i;

    func_1(ptr);

    ptr = ar;

    func_2(ptr);


    return 0;
}