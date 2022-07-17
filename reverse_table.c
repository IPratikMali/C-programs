#include<stdio.h>

int main()
{
    int numb;

    printf("enter the numb");
    scanf("%d",&numb);

    printf("reverse of table ::\n ");

    for(int i = 10 ; i >= 1 ; i--){

        printf(" %d \n", numb * i);
    }

    

    return 0;

}