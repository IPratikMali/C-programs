// print table of given number using function

#include<stdio.h>

int printTable(int numb);

int main()
{
    int numb;
    printf("enter the number : ");
    scanf("%d",&numb);

    printTable(numb);       // actual parameter or argument
    
    return 0;
}

int printTable(int numb){           // formal parameter

    for(int i = 1 ; i<=10 ; i++){
        printf("%d \n",numb * i);
    }
}

/* output 

enter the number : 4
4 
8
12
16
20
24
28
32
36
40

*/