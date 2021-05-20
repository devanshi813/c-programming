#include<stdio.h>

int main(void)

{ int a;
    
    printf("enter a numer:  ");
    scanf("%i", &a);

    if( a % 2==0)
    printf("even");

    else
    printf("odd");

}