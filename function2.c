#include<stdio.h>

void add();
void sub();
void div();
void multi();   

int a , b;  // declaring here so it can be accessed by any function;

int main()
{
    

    printf("enter two numbers : \n");
    scanf("%d %d",&a,&b);
    add();
    sub();
    div();
    multi();
    return 0;
}

void add(){
    printf("sum is %d \n",a+b);           // addition of a & b

}

void sub(){                              // difference btn a & b

    printf("difference is %d \n",a-b);
}

void div(){                              // division of a & b

    printf("division is %d \n",a/b);

}

void multi(){                           // product of a & b

    printf("multiplication is %d \n",a * b);

}