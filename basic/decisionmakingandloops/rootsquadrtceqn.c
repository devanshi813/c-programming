#include<stdio.h>
#include<math.h>

int main(void)

{
   double x, y, d, a, b, c, realpart, imgpart;

   printf("enter the coefficients a b and c:    ");
   scanf("%lf %lf %lf", &a,&b,&c);
   
   d = b*b - 4*a*c;

   if(d>0)
   {   
       x = (-b+sqrt(d))/2;
       y = (-b-sqrt(d))/2;
       printf("root x :%.lf root y :%.lf ", x ,y);
   }

   else if(d==0)
   {
        x = y = -b/ (2*a);
        printf("x = y = %.lf",x);
   }

   else
   {
       realpart = -b/ (2*a);
       imgpart = sqrt(-d)/2;
       printf("x = %.2lf + %.2lfi y = %.2lf - %.2lf"i, realpart, imgpart, realpart, imgpart);

   }

}
