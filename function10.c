// print the area of rectangle , circle and square by using functions

#include<stdio.h>

int areaR(float a , float b);  // area of rectangle
int areaC(float r);  // area of circle
int areaS(float s);  // area of square

int main()
{   
    float side , length , breadth , radius;

    printf("enter the side of square :");
    scanf("%f",&side);
    printf("enter the length and breadth of rectangle :");
    scanf("%f %f", &length , &breadth);
    printf("enter the radius of circle : ");
    scanf("%f",&radius);

    areaR(length , breadth);
    areaC(radius);
    areaS(side);

    return 0;
}

int areaR(float a , float b){

    printf("area of rectangle is %f \n", 2 * (a + b));
}

int areaC(float r){
    printf("area of circle is : %f \n", r * r * 3.14);
}

int areaS(float s){
    printf("area of square is %f \n ", s * s);
}

/* output

enter the side of square : 4
enter the length and breadth of rectangle : 4 5
enter the radius of circle : 5
area of rectangle is 18.000000 
area of circle is : 78.500000
area of square is 16.000000


*/