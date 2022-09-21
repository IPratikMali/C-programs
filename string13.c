//write a program to check if given character is present in string or not

#include<stdio.h>

void check(char str[] , char ch);

int main()
{   
    char str[100]="hello world" ;
    char ch;

    printf("enter the character : ");
    scanf("%c",&ch);
    check(str , ch);
    return 0;
}

void check(char str[] , char ch)
{
    for(int i = 0 ; str[i]!= '\0' ; i++)
    {
        if(str[i] == ch)
        {
            printf("YES");
            return;
        }
    }
    printf("NO");
    return;
}
/* output

enter the character : a
NO

enter the character : w
YES

*/