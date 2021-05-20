#include<stdio.h>
int main(void)

{
    char operator;
    double n1, n2;

    printf("enter the operator: ");
    scanf("%c",&operator);
    printf("enter the two num: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operator){

        case '-':
        printf("%lf",n2-n1);
        break;

        case '+':
        printf("%lf",n2+n1);
        break;

        case '/':
        printf("%lf",n2/n1);
        break;

        case '*':
        printf("%lf",n2*n1);
        break;

        default:
        printf("Error! operator is not correct");
    }
}