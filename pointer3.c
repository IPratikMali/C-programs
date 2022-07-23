// printf the value of number from it's pointer to pointer
#include<stdio.h>

int main()
{
    int numb = 10;
    int *ptr = &numb;
    int **pptr = &ptr;

    printf("value of numb is %d",**pptr);
    return 0;
}

/* output

value of numb is 10

*/