#include<stdio.h>

int main()
{
    int numb;
    printf("enter the number");
    scanf("%d",&numb);

    if(numb < 0){
        printf("number is not natural number");
    }
    else
    {
        printf("number is natural number");
    }
    return 0;

}