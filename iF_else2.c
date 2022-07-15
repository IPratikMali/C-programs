#include<stdio.h>

int main()
{
    int marks;
    
    printf("enter your marks");
    scanf("%d",&marks);

    if(marks > 90)
    {
        printf("A+ Grade");
    }
    else if(marks > 80)
    {
        printf("A Grade");
    }
    else if(marks > 70)
    {
        printf("B Grade");
    }
    else
    {
        printf("C Grade");
    }
    return 0;

}