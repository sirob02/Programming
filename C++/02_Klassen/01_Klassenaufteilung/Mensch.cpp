
#include "header.h"


void Mensch::erzeuge(const char *newName,unsigned int newAlter){
    strncpy(name,newName,sizeof(name)-1);
    name[sizeof(name)] = '\0';
    alter = newAlter;
}

void Mensch::print(){

    cout << "Name: " << name << "\n";
    cout << "Alter: " << alter<< "\n";


}

