#include<stdio.h>

#define SIZE 100

//functions
int doubleChar(char* s,char* t);


int main(){

    char source[SIZE] = "Hallo Ich bin Robert!";
    char target[SIZE];
    int numDoubled;

    printf("Before: %s\n",source);
    numDoubled = doubleChar(source,target);
    printf("After: %s\n",target);
    printf("Number of Chars doubled: %d\n",numDoubled);

    return 0;
}

int doubleChar(char* s,char* t){
    int count = 0;
    char *c = s;
    int posT = 0;

    while(*c != '\0'){
        if (*c >= 'A' && *c <= 'Z'){
            t[posT] = *c;
            t[posT+1] = *c;
            posT += 2;
            count++;
        }else if (*c >= 'a' && *c <= 'z'){
            t[posT] = *c;
            t[posT+1] = *c;
            posT += 2;
            count++;
        }else{
           t[posT] = *c; 
           posT++;
        }
        c++;
    }

    return count;



}