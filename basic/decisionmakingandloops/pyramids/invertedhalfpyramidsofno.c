#include<stdio.h>
int main(void)

{
    int j,i,num;

    printf("Write the num: ");
    scanf("%i",&num);

    for(i=num ; i>0; i--)
    {
        for(j=1 ; j<=i; j++)
         {
             printf("%i ",i);
         }    
          printf("\n");
    }

}    