/**
 *  @author: Robert Simon
 * 
 *  @title: Writing to a File
 */ 

#include<stdio.h>

int main(){

//Variables
    FILE *fp;

    //Opening
    fp = fopen("InputFile.txt","w+");

    fputs("This wars written to the File", fp);
    fclose(fp);


    return 0;
}