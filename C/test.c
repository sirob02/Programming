#include<stdio.h>

int main(){

    char s[] = "Hello";
    int l = sizeof(s)/sizeof(s[0]);

    for(int i = l-2, j = 0; j <= l-2/2; i--,j++){
        char hold = s[j];
        s[j] = s[i];
        s[i] = hold;
    }


    printf("%s\n",s);
    



    return 0;
}