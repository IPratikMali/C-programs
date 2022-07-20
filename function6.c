#include<stdio.h>

int sum(int x , int y);  

int main()
{
    int a , b;

    printf("enter number : \n");
    scanf("%d",&a);
    printf("enter second number : \n");
    scanf("%d",&b);

    int s = sum(a , b);

    printf("sum is :  %d ",s);
    return 0;
}

int sum(int x , int y){

    return x + y;
}


/* output 

enter number : 
10
enter second number : 
20
sum is :  30  


*/