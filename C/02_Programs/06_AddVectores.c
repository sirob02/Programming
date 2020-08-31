#include<stdio.h>

#define size 3

//functions
void display(int* v);
int*  addVectores(int* v1, int *v2, int* vRes);


int main(){

    int v1[size] = {1,2,3};
    int v2[size] = {4,5,6};
    int v3[size];

    display(v1);
    display(v2);

    addVectores(v1,v2,v3);

    display(v3);

    return 0;
}


void display(int* v){
    printf("Vector:\n");
    for(int i = 0; i < size; i++){
        printf("(%.3d)\n",v[i]);
    }
}

int* addVectores(int* v1, int* v2,int* vRes){


    for(int i = 0; i < size; i++){
        vRes[i] = v1[i] + v2[i];
    }

    return vRes;
}