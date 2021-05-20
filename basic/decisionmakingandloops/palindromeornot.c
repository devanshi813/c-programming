#include<stdio.h>

int main(void)

{   int n, rev=0, rem, original;

    printf("Enter the number: ");
    scanf("%lld",&n);
    original = n;
    while(n != 0)
    {   
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n/10;
    }

    if(rev == original)
    printf("it is");
    else
    printf("no");
}