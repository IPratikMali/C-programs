// find the factorial of given number by using recursive function

#include<stdio.h>

int fact(int numb);

int main()
{
    int numb;
    printf("enter the number : ");
    scanf("%d",&numb);

    printf("factorial of given number is : %d",fact(numb));
    return 0;
}

int fact(int numb){

    if(numb == 1){
        return 1;  // factorial of 1 is 1
    }
    int factN = fact(numb - 1); // factorial of number
    int total = factN * numb ;
    return total;
}

/* output

enter the number :  7
factorial of given number is : 5040

*/