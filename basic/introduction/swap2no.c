#include<stdio.h>

int main(void)

{
   int a,b,temp;

   printf("enter a:  ");
   scanf("%i", &a);

   printf("enter b:  ");
   scanf("%i", &b);

   temp = a;
   a = b;
   b= temp;

   printf("after swapping a: %i\n",a);
   printf("after swapping b: %i",b);



}