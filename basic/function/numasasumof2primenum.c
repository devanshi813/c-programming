#include<stdio.h>

int main(void)

{
    int num,i,j,flag=1,yesi,yesj;
    printf("enter the num: ");
    scanf("%i",&num);
 
 while(num != 0)
 {

    for(i=2 ; i<=num ; i++)
    {
        if(num%i==0)
        {
            flag = 0;
            break;
        }

        if(flag==1)
        {
            yesi = i;
        }
    }

     for(j=2 ; j<=num ; j++)
    {
        if(num%j==0)
        {
            flag = 0;
            break;
        }

        if(flag==1)
        {
            yesj = j;
        }
    }

    
    {
        printf("%i = %i + %i",num, yesi,yesj);
    }
 }     
}     
