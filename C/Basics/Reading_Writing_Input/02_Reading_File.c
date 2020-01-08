/**
 * @author: Robert Simon
 * 
 * @title:  Reading Input from a File multiple Lines
 */ 

#include<stdio.h>

int main(){
    
//Variables
    FILE *fp;
    char str[100];

    //open File
    fp = fopen("InputFile.txt","r");
    
    //Error handling
    if(!fp){
        perror("Error opening File");
        return -1;
    }
    //Reading
    while (fgets(str,100,fp)){
        puts(str);
    }

    fclose(fp);

    return 0;
}