#include<stdio.h>

void printA(int numb);
void _printA(int *numb);

int main()
{
    int numb = 10;

    printf("%p \n",&numb);
    printA(numb);

    printf("%p \n",&numb);
    _printA(&numb);
    return 0;
}

void printA(int numb){
    printf("%p \n",&numb);
}

void _printA(int *numb){
    printf("%p \n",numb);
}

/* output 

0061FECC 
0061FEB0 
0061FECC
0061FECC

*/

// address will not be the same in call by value because it creates copy of varaiable;