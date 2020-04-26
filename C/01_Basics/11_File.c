#include<stdio.h>

int main(){

    char buf1[1024];
    char buf2[1024];
    FILE *fptr = fopen("testFile.txt","r+");
    
    //check if open
    if (!fptr){
        perror("could not open File");
    }


    fscanf(fptr,"%s %s",buf1,buf2);
    printf("Text: %s\n%s\n",buf1,buf2);

    fseek(fptr,0,0);
    fprintf(fptr,"%s adsfdsfsdfdsf %s",buf1,buf2);

    fclose(fptr);

    
    
    


    return 0;
}