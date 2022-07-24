// find the largest number 
#include<stdio.h>

int main()
{
    int a ,b ,c;
    int *ptr;

    printf("enter the number1 :");
    scanf("%d",&a);
    printf("enter the number2 :");
    scanf("%d",&b);
    printf("enter the number3 :");
    scanf("%d",&c);

    if(a > b && a > c){
        ptr = a ;
    }
    else if(b > c && b > a){
        ptr = b ;
    }
    else{
        ptr = c ;
    }

    printf("largest number is : %d",ptr);
    return 0;
}


/* output

enter the number1 : 10
enter the number2 :50
enter the number3 :45
largest number is : 50

*/