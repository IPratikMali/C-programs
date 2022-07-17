#include<stdio.h>

int main()
{
    do{
        int numb;
        printf("enter the number");
        scanf("%d",&numb);

        if(numb % 7==0){

            break;
        }
        printf("%d \n",numb);
    }while(1);
    return 0;

}