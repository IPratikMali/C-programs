#include<stdio.h>

int main()
{

    int numb;

    printf("enter the number--");
    scanf("%d",&numb);

    if(numb > 0){
        printf("number is positive ! \n");

        if(numb % 2 == 0){
            printf("number is even ! \n");
        }
        else{
            printf("number is odd !");
        }
        
    }
    else{
        printf("number is negative! \n");
        
        if(numb % 2 == 0){
            printf("number is even ! \n");
        }
        else{
            printf("number is Odd !");
        }
    }
    return 0;

}