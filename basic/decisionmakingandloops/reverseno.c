#include<stdio.h>

int main(void)
{

     
  int n,rem,rev=0;
  printf("enter the number you want to reverse: ");
  scanf("%d",&n);

  while(n!=0)
 {
      rem = n % 10;
      rev = rev * 10 + rem;
              n /= 10;

   
 }   
     printf("%d",rev) ;
}