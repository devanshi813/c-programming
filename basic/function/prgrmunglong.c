#include<stdio.h>
int main(void)
{
    int a;
    long b;
    long long c;
    double d;
    long double e;
   
   printf("size of int: %zu ",sizeof(a));
   printf("size of long: %zu ",sizeof(b));
   printf("size of long long: %zu  ",sizeof(c));
   printf("size of double: %zu ",sizeof(d));
   printf("size of long double: %zu ",sizeof(e));

}