#include<stdio.h>

int main(void)

{   int exp, base;
    long long result=1;
    printf("enter the base: ");
    scanf("%i",&base);
    printf("enter the exponent: ");
    scanf("%i",&exp);
 
//    for(exp !=0 ; exp--; )
//     {
//          result = base * result;
//     }
   
   while(exp != 0 )
    {
        result *= base;
        exp--;
    }  
     printf("%lld",result);

}