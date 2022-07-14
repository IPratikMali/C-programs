#include<stdio.h>
#include<math.h>
int main()
{
    int a = 5 , b = 6;
    int sum = a + b;
    int multi = a * b;
    int sub = a - b;
    float div = b/a;
    int power = pow(a,b);
    int modulo = b/a;
    printf("addition = %d \n multiplication = %d \n subtraction = %d \n division = %f",sum,multi,sub,div);
    printf("\n power = %d",power);
    printf("\nmodulo is %d",modulo);
    return 0;

}