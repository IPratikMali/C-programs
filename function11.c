// convert the celsius value to Fahrenheit by using function

#include<stdio.h>

float convert(float celsius);

int main()
{
    float celsius;
    printf("enter the temperature (celsius) : ");
    scanf("%f",&celsius);
    printf("Fahrenheit is : %f",convert(celsius));
    return 0;
}

float convert(float celsius){

    float far = celsius * (9.0/5.0) + 32 ; 
    return far;
}

/* output

enter the temperature (celsius) : 5
Fahrenheit is : 41.000000

*/