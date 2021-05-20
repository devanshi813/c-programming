#include<stdio.h>
int main(void)
{
    int num,n,rem,result=0,originalnum;
    printf("the num: ");
    scanf("%d",&num);
    originalnum = num;

    while(originalnum !=0)
    {
      rem = originalnum%10;
      result +=  rem * rem * rem;
      originalnum/=10;
    }

    if(result==num)
    printf("yes");
    else
    printf("no");      

}