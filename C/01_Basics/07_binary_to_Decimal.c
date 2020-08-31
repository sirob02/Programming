#include<stdio.h>
#include<math.h>

#define ll  long long 

int main(){

    ll num;

    printf("Please enter a number: ");

    scanf("%lld",&num);

    ll dez = 0, i = -1;
    while (num != 0){
        i++;
        dez += pow(2,i)* (num % 10);
        num /= 10;
    }

    printf("Dezimal is: %lld \n",dez);


    return 0;
}