#include<stdio.h>
int checkprimedisplay(int low);
int main()
{
int low,high,flag,i;

printf("Enter the number: ");
scanf("%i %i", &low, &high);

for(i=low+1 ; i<high; i++)
{

    flag = checkprimedisplay(i);

    if(flag==1)
    printf("%i ",i);

}

}

int checkprimedisplay(int low)

 {  
     int p,flag=1;
   for(p=2 ; p<=low/2 ; p++)
    {
        if(low%p==0)
        {flag = 0;
        break;}
    }
   
    return flag;  
 }
 


