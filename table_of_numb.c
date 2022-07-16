#include<stdio.h>

int main()
{
    int i , numb;

    printf("enter the number");
    scanf("%d",&numb);

    for(i=1 ; i <= 10 ; i++)
    {
        printf("%d \n",numb*i);
    }

    return 0;
    
}