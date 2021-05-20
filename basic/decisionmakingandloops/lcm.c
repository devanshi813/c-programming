#include<stdio.h>

int main(void)

{
    int i, n1, n2, lcm, gcd;

    printf("enter the integers: ");
    scanf("%i %i", &n1, &n2);

    for(i=2 ; i <= n1 || i <=n2 ; i++)
    {
            if (n1 % i == 0 && n2 % i == 0)
            gcd = i;    
    }

  lcm = (n1 * n2)/gcd;   

  printf("lcm of %i and %i is %i", n1, n2,lcm); 

}