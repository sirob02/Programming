#include<stdio.h>

int main(){

    int num = 64;
    
    printf("\n");   
    for(int i = 0; i < 26; i++){
        num +=1;
        printf("%c",num);
    }
    printf("\n");
    num += 6;
    for(int i = 0; i < 26; i++){
        num += 1;
        printf("%c",num);
    }
    printf("\n");
    printf("\n");
    
    return 0;
}