/**
 *  @author Robert Simon
 * 
 *  @title: usint structs
 * 
 */ 
#include <stdio.h>

//struct
struct page{
   int Zeilen;
   char titel[30];
}page;

struct index {
   int seite;
   char titel[30];
   struct page page;
};

//typedef struct index lib;

int main (){
    struct index index;

    index.seite =10;

    index.page.Zeilen =34;

    printf("anzahl der Zeilen %d auf Seite %d\n", index.page.Zeilen, index.seite);

    return 0;

}  
