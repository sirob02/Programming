#include<stdio.h>

int main(){

    char file[] = "testFile.txt";
    char text[] = "Hello to the FIle!\n";

    FILE* fptr = fopen(file,"r+");

    if (!fptr){
        perror("ERROR could not open file!\n");
    }
    

    fprintf(fptr,"%s",text);

    fclose(fptr);

    return 0;
}