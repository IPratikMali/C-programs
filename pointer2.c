#include<stdio.h>

int main()
{
    int x;
    int *ptr ;

    ptr = &x;
    *ptr = 0;

    printf("x is %d  \n",x);
    printf("*ptr is %d \n",*ptr);
    *ptr += 5;

    printf("x is %d  \n",x);
    printf("*ptr is %d \n",*ptr);

    (*ptr)++;

    printf("x is %d  \n",x);
    printf("*ptr is %d \n",*ptr);

    return 0;
}


/* output 

x is 0  
*ptr is 0 
x is 5
*ptr is 5
x is 6
*ptr is 6

*/
