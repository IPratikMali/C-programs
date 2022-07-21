// print hello world 5 time by using recursive function

#include<stdio.h>

void hello(int count);

int main()
{
    int count ;
    printf("enter the count :");
    scanf("%d",&count);
    hello(count);
    return 0;
}

void hello(int count){
    if(count == 0){
        return;
    }
    printf("hello world \n");
    hello(count-1);
}

/* output

enter the count : 5
hello world 
hello world
hello world
hello world
hello world

*/