#include<stdio.h>

int main(void)

{
   int i, n;
   unsigned long long fact = 1;
   printf("enter the number you to get the factorial of: ");
   scanf("%i", &n);

if(i<=0)
{
    printf("not valid");
}

else
{
   for(i=n ; i>0 ; i--)
  {
      fact = fact * i;
  }

    printf("factorial of that number: %i", fact); 
}
}