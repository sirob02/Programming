#include<stdio.h>

int main(){

    const char s[] = "AAABAA";
    const char *pos = s;
    int count = 0;
    const char c = 'A';

    while(*pos != '\0'){
        if(*pos == c){
            count++;
        }
        pos++;
    }

    printf("Der Buchstabe %c war %d mal vorhanden!",c,count);

    return 0;
}