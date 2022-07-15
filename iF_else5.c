#include<stdio.h>

int main()
{
    char ch;

    printf("enter the character");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("upper case");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Lower Case");
    }
    else
    {
        printf("not english character");
    }
    return 0;
}