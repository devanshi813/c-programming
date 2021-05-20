#include<stdio.h>
int checkprimenum(int num);
int checkarmstrong(int num);
int main(void)

{
    int num,i, rem,result,originalnum, flag;

    printf("enter the num: ");
    scanf("%i", &num);
    
    // check prime number
    flag = checkprimenum(num);

    if(flag==1)
    printf("yes prime\n");
    else
    printf("not a prime\n");
    
    // check Armstrong number
    result = checkarmstrong(num);

    if(result==num)
    printf("yes it is armstrong ");
    else
    printf("not an armstrong");
}

int checkprimenum(int num)

{ 
    int i, flag=1;
    for(i = 2 ; i<=num/2 ; i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int checkarmstrong(int num)
    
    {
        int rem, originalnum,result=0;
        originalnum = num;
        while(originalnum!=0)
    {   
        rem = originalnum % 10;
        result += rem * rem* rem;
        originalnum /= 10;
    }
        return result;
    }