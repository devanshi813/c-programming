#include<stdio.h>

int main(void)

{
   int quotient, reminder, divisor, divident;

   printf("enter the divident:  ");
   scanf("%d", &divident );
   printf("enter the divisor:  "); 
   scanf("%d", &divisor );
 
   quotient= divident / divisor;

   reminder= divident % divisor;

   printf("quotient : %d\n",quotient);
   printf("reminder : %d\n",reminder);
   

}
