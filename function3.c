#include<stdio.h>

void hello();
void bye();

int main()
{
    hello();
    bye();
    return 0;
}

void hello(){

    printf("hello \n");
}

void bye(){
    printf("Good BYE");
}