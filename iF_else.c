#include<stdio.h>

int main()
{
    int age;

    printf("enter your age");
    scanf("%d",&age);

    if(age > 19)
    {
        printf("welcome to the Club \n");
    }
    else
    {
        printf("sorry you are not allowed here \n");
    }

    printf("Thank YOU"); 
    return 0;

}