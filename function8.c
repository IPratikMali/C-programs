// take the price from user and add 18% gst and print it using function


#include<stdio.h>

int price(float p);

int main()
{
    float p;
    printf("enter the price : ");
    scanf("%f",&p);

    price(p);
    
    return 0;
}

int price(float p){
    printf("final price is : %f",p + (0.18 * p));
}

/* output 

enter the price : 500
final price is : 590.000000

*/