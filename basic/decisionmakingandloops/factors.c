#include<stdio.h>
int main(void)
{
     int num,i;
     printf("Enter the num: ");
     scanf("%d", &num);

     for(i=1 ; i<=num ; ++i)
     {
        if(num % i == 0)
         { 
              printf("%d ",i);
         }
     }
}
  