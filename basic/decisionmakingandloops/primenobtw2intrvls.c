#include<stdio.h>

int main(void)

{
    int low, high,p,flag;

    printf("enter the 1 numbr: ");
    scanf("%d",&low);
    printf("enter the 2 numbr: ");
    scanf("%d",&high);

    while(low < high)
{   flag = 1;

    if(low<=1)
    {
        ++low;
        continue;
    }

    for(p=2 ; p<=low/2 ; p++)
    {
       if(low % p == 0)
       {
           flag=0;
           break;
       }
    }
    
    if(flag==1)
    printf("%d ",low);
    low++;
}
    

}