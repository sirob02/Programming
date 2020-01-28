#include<iostream>
#include<string.h>
using namespace std;

class Mensch{
private:
    char name[100];
    unsigned int alter;
    
public:
    void erzeuge(const char *newName ,unsigned int newAlter = 0);
    void print();
};