//swap two numbers
#include<stdio.h>

void swap(int a , int b);       
void _swap(int *a,  int *b);

int main()
{
    int a , b;
    printf("enter the value of a  :");
    scanf("%d",&a );
    printf("enter the value of b :");
    scanf("%d",&b);

    swap(a,b);
    printf("a : %d \n b : %d \n \n",a , b);
   
    _swap(&a , &b);
    printf("a : %d \n b : %d ",a , b);
    return 0;
}

//call by value
void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
    printf("a : %d \n b : %d \n",a , b);
}

// call by reference
void _swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a : %d \n b : %d \n",*a , *b);

}

/* output

a : 3 
 b : 5
a : 5
 b : 3

a : 3
 b : 5
a : 3
 b : 5
 
 */