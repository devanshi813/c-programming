#include<stdio.h>

int main(void)

{
   char a;
   printf("write what you've:  ");
   scanf("%c", &a);

   if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
   printf("it is an alphabet");

   else
   printf("it is a charachter");

}