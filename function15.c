// make your own paw function

#include<stdio.h>

float pawer(float numb , float power);

int main()
{
    float numb , power;

    printf("enter the numb : ");
    scanf("%f",&numb);
    printf("enter the power : ");
    scanf("%f",&power);
=   
    printf("%f",pawer(numb , power));
    
    return 0;

}

float pawer(float numb , float power){
    if(power == 0){
        return 1;
    }
    float numb2  = numb * numb;
    power--;
    float ans = numb2 * numb ;
    return ans;
}


/* output

enter the numb : 8
enter the power : 3
512.000000

*/