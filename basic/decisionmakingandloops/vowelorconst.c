#include<stdio.h>
 
int main(void)

{
    char a ;

    printf("enter the alphabet: ");
    scanf("%c", &a);

    if(a== 'a'||a== 'i'||a== 'o'||a== 'u'||a== 'e'||a== 'A' ||a== 'E'||a== 'I'||a== 'O'||a== 'U') 
    printf("vowel");

    else
    printf("consonant");
}