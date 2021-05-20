#include<stdio.h>

int main(void)

{   long long n;
    int i, count=0;

    {
        printf("enter the integer: ");
        scanf("%lld", &n);

        // for(i=1 ; i<=n ; i++)
        // {
        //    if(n!=0)
        //    n /= 10 ;
        //    ++count;
        // }
        //    printf("Number of digits: %d", count);    

       // iterate until n becomes 0
    // remove last digit from n in each iteration
    // increase count by 1 in each iteration
    while (n != 0) {
        n /= 10;     // n = n/10
        ++count;
    }

   
        
    }
}