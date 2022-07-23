#include<stdio.h>

int main()
{
    int age = 20;
    int *ptr = &age;  // * for value at address ,, & for adress of value;
    int age2 = *ptr;

    printf("%d \n",age2);
    printf("%p \n ",ptr); // hexadecimal address
    printf("%u \n",ptr); // unsigned int for numeric address
    printf("%p \n",&ptr);  // address of pointer
    printf("%d \n",*ptr); // value at pointer
    printf("%d\n",*(&age));
    return 0;
}

/* output

20 
0061FEC8 
6422216
0061FEC4
20
20
*/