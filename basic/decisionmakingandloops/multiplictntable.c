#include<stdio.h>

int main(void)

{
    int n, i;
    
    printf("enter the number: ");
    scanf("%i", &n);

    for(i=1 ; i<=10; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }



}