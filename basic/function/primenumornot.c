// #include<stdio.h>

// int main(void)

// {
//     int num, i,flag=1;

//     printf("enter the number: ");
//     scanf("%d",&num);

//     for(i=2 ; i<num/2 ; i++)
//     if(num%i==0)
//     {
//         flag=0;
//         break;   
//     }       

//     else if(flag==1)
//     {
//         printf("it is a prime num");
//     } 
//     else
//     {
//         printf("it is not a prime num");
//     }

// }

/*no argument no return value
#include<stdio.h>
void checkPrimeNumber();

int main()

{
    checkPrimeNumber();    // argument is not passed
    return 0;
}
 
void checkPrimeNumber()
{
    int num, i,flag=1;

    printf("Enter a positive integer: ");
    scanf("%d",&num);


    for(i=2 ; i<=num/2 ; i++)
   {
        if(num%i == 0)
        {
            flag = 0;
            break;
        }     
   }
    if(flag==1)
    {
        printf("it is a prime num");
    } 
    else
    {
        printf("it is not a prime num");
    }


} */


/*no argument but a return value
#include<stdio.h>
int checkPrimeNumber();

int main()

{  
    int num, i,flag=1;

   num = checkPrimeNumber(); 
    
    for(i=2 ; i<=num/2 ; i++)
   {
        if(num%i == 0)
        {
            flag = 0;
            break;
        }     
   }
    if(flag==1)
    {
        printf("it is a prime num");
    } 
    else
    {
        printf("it is not a prime num");
    }

    return 0;
}
 
int checkPrimeNumber()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d",&num);
   
   return num;
} */

/* argument but no return value

#include<stdio.h>
void checkPrimeNumber(int num);

int main()

{
     int num, i,flag=1;

    printf("Enter a positive integer: ");
    scanf("%d",&num);

    checkPrimeNumber(num);   
    return 0;
}
 
void checkPrimeNumber(int num)
{
    int i,flag=1;

    for(i=2 ; i<=num/2 ; i++)
   {
        if(num%i == 0)
        {
            flag = 0;
            break;
        }     
   }
    if(flag==1)
    {
        printf("it is a prime num");
    } 
    else
    {
        printf("it is not a prime num");
    }
}*/


// argument and return value either
#include<stdio.h>
int checkPrimeNumber(int num);

int main()

{
    
    int num, i,flag=1;

    printf("Enter a positive integer: ");
    scanf("%d",&num);

    flag = checkPrimeNumber(num); 

     if(flag==1)
    {
        printf("it is a prime num");
    } 
    else
    {
        printf("it is not a prime num");
    }

    return 0;

}
 
int checkPrimeNumber(int num)
{
    int i;
    for(i=2 ; i<=num/2 ; i++)
   {
        if(num%i == 0)
        {
            return 0;
        }   
       
   }
   

}