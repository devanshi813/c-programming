#include<stdio.h>
int main(void)

{
    int j,i,num;

    printf("Write the num: ");
    scanf("%i",&num);

    for(i=1 ; i<=9; i++)
    {
        for(j=1 ; j<=i; j++)
         {
             printf("%i ",i);
         }    
          printf("\n");
    }

}    