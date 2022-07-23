#include<stdio.h>

int square(int numb);
int _square(int* numb);

int main()
{
    int numb;
    printf("enter the number :");
    scanf("%d",&numb);

    square(numb);                       // call by value- we pass value as arguement
    printf("number is %d\n",numb);

    _square(&numb);                     // call by reference- we pass address as arguement
    printf("number is %d",numb);
    return 0;
}

int square(int numb){                                  // call by value
    numb = numb * numb;
    printf("square of number is %d \n",numb);
}

int _square(int* numb){                                       // call by reference
    *numb = (*numb) * (*numb);
    printf("square of number is %d \n",*numb);
}



/* output

enter the number :4
square of number is 16 
number is 4
square of number is 16
number is 16

*/