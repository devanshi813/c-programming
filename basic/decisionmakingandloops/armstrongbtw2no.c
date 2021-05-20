#include<stdio.h>
int main(void)

{
    int low,high,num,n,rem,result=0,originalnum,flag;

    printf("enetr the 2 num: ");
    scanf("%i %i", &low, &high);

    while(low<high)
    {
        flag = 1;

    if(low<=1)
    {
        low++;
        continue;
    }

     originalnum = num;

    while(originalnum !=0)
    {
      rem = originalnum%10;
      result +=  rem * rem * rem;
      originalnum/=10;
    }


    if(flag==1)
    printf("%d ",low);
    low++;
    
    }


}