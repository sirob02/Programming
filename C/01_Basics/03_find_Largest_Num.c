#include<stdio.h>

int main(){

    int a,b,c;

    printf("Please enter 3 space seperated numbers\n");

    scanf("%d %d %d",&a,&b,&c);

    if(a > b && a > c )
        printf("%d is biggest\n",a);
    if(b > a && b > c )
        printf("%d is biggest\n",b);
    if(c > b && c > a )
        printf("%d is biggest\n",c);


    return 0;
}