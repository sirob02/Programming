#include<stdio.h>
#include<math.h>

int main(){

const int a = 1, b = -4, c = 3;


float T1 = -b/2;


float T2 = sqrt((b/2) * (b/2) - c);

printf("Root 1: %f Root 2: %f \n",T1 + T2,T1-T2);


return 0;

}
