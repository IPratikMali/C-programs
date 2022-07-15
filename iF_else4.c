#include<stdio.h>

int main()
{
    int age;

    printf("enter your age");
    scanf("%d",&age);

    age < 18 ? printf("you are not allowed here") : printf("welcome to the Club");
    return 0;

}