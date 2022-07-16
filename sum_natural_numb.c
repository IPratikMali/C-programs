#include<stdio.h>

int main()
{
    int i , numb , temp=0 ;
    printf("enter the number");
    scanf("%d",&numb);

    for(i=numb ; i>=1 ; i--)
    {

    temp = temp + i;
    printf("%d \n",i);
        
    }

    printf("sum is %d \n",temp);

    return 0;

}