#include<stdio.h>

int main(void)

{
   int year;

   printf("enter the year:  ");
   scanf("%i", &year);

// leap year if perfectly divisible by 400
   if(year%400==0)
{   
    printf("%i is a leap year", year);
}
// not a leap year if divisible by 100
   // but not divisible by 400
   else if(year%100==0)
{  
     printf("%i is not a leap year", year);
}
// leap year if not divisible by 100
   // but divisible by 4
   else if(year%4==0)
{  
     printf("%i is a leap year", year);
}
// all other years are not leap years
  else
   {
      printf("%i is not a leap year.", year);
   }

}