#include<stdio.h>

int main(void)

{
    int i,  n, sum = 0;

    printf("enter a positive integer:  ");
    scanf("%i", &n );

    for ( i = 1; i <= n; i++)
    {
        sum = i+sum;  
    }
     
        printf("sum of n natural no. :%i", sum);

}