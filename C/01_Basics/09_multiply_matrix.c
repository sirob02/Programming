#include<stdio.h>

int main(){

    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[] = {1,2,3};
    int lenA = sizeof(a)/sizeof(a[0]);
    int lenB = sizeof(b)/sizeof(b[0]);
    
    int res[lenB];

    for (int y = 0; y < lenA; y++){
        int tmp = 0;
        for (int x = 0; x < lenB; x++){
            tmp += a[y][x] * b[x];
        }
        res[y] = tmp;
    }

    for (int i = 0; i < lenB; i++){
        printf(" %d \n",res[i]);
    }
    
    

    

    return 0;
}