#include<stdio.h>

int main(void)

{
  double a,b,c;

  printf("enter 3 numbers :    ");
  scanf("%lf %lf %lf",&a, &b, &c);

  if(a>b && a>c)
  {
  printf("a is largest");
  }

  else if (b>a && b>c)
  {
  printf("b is largest");
  }

  else if (a==b==c )
  {
    printf("equal");
  }

  else
  {
      printf("c is largest");
  }
  
  

}