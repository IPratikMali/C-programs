// write the function to calculate sum , product and average of two numbers , and print it in main function
#include<stdio.h>

int calculator(int a , int b , int *sum , int *prod , int *avg);

int main()
{
    int a , b , sum , prod , avg;
    printf("enter the numb1 : ");
    scanf("%d",&a);
    
    printf("enter the numb1 : ");
    scanf("%d",&b);

    calculator(a , b , &sum , &prod , &avg);
    printf("sum : %d \n product : %d \n average : %d \n",sum,prod,avg);
    return 0;
}

int calculator(int a , int b , int *sum , int *prod , int *avg){
   *sum = a+b;
   *prod = a*b;
   *avg = (a+b)/2;

}

/* output 

enter the numb1 : 5
enter the numb1 : 3
sum : 8 
product : 15
average : 4


 */