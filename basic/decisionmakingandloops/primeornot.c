#include<stdio.h>

int main(void)

{
    int p,n, flag=0;
    printf("enter the number: ");
    scanf("%i",&n);
    
    for(p=2 ; p<=n ; p++)
    {
            if(n % p == 0)
           { flag=1;
            break;}
    }
    if(n==1)
    printf("composite");

    else if(flag==0)
    printf("prime");

    else
    printf("not prime");
}     
