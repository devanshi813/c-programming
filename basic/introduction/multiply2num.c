#include<stdio.h>

int main(void)

{
    double a,b,multiplication;

    printf("add two numbers:    ");
    scanf("%lf %lf" , &a, &b);

 multiplication = a*b;

 printf("%lf * %lf = %lf", a,b, multiplication);
}