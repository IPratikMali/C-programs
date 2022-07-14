#include<stdio.h>

int main()
{
    float length , breadth;

    printf("enter the length of rectangle");
    scanf("%f",&length);
    printf("enter the breadth of rectangle");
    scanf("%f",&breadth);

    printf("perimeter of the rectangle is %f", 2 * (length +  breadth));
    return 0;
}