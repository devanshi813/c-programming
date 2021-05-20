#include<stdio.h>

int main(void)

{
    int num;

    printf("enter the number: ");
    scanf("%i", &num);

    if(num>0)
    printf("%i is positive", num);

    else if(num<0)
    printf("%i is negative", num);

    else 
    printf("%i is neither positive nor negative", num);
    
    
}