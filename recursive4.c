// print the sequence of fibonacci series

#include<stdio.h>

int fib(int numb);

int main()
{
    int numb ;
    printf("enter the number : ");
    scanf("%d",&numb);

    printf("%d",fib(numb));
    return 0;
}

int fib(int numb){

    if(numb == 0 || numb == 1){
        if(numb == 0 ){
            return 0;
        }
        if(numb == 1){
            return 1;
        }
    }
    int fibN1 = fib(numb-1);
    int fibN2 = fib(numb-2);
    int fibN = fibN1 + fibN2 ;
    return fibN;
}

/* output

enter the number :  7
13

*/