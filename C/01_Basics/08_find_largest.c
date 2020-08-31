#include<stdio.h>

int main(){

    int ar[] = {1,2,32,42,4,456,67,34,2};
    int len = sizeof(ar)/sizeof(ar[0]);

    printf("Arary is: \n");
    
    for (int i = 0; i < len; i++){
        printf(" %d ",ar[i]);
    }
    
    int lar = ar[0];
    for (int i = 1; i < len; i++){
        if (ar[i] > lar){
            lar = ar[i];
        }
    }
    
    printf("\n %d \n",lar);



    return 0;
}