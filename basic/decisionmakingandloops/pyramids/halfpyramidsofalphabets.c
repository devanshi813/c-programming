#include<stdio.h>
int main(void)

{   
    int i,j;
    char input, alphabet;

    printf("Write the num: ");
    scanf("%c",&input);

    for(i=1 ; i<='a'; i++)
    {
        for(j=1 ; j<=i; j++)
         {
             printf("%c ",&j);
         }

         printf("\n");
    }
}