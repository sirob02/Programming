#include"header.h"


int main(){

    Mensch Robert;
    Mensch *ptr;
    Mensch dummy;

    Robert.erzeuge("Robert",20);


    ptr = &dummy;
    ptr->erzeuge("Pointer",0);

    Robert.print();
    ptr->print();



    return 0;
}