#include<stdio.h>

int main()
{
    int marks;

    printf("enter your marks");
    scanf("%d",&marks);

    if(marks > 75 && marks < 85){
        printf("congrats you got scholarship of 10k");
    }
    else if(marks < 85 && marks > 95){
        printf("congrats you got scholarship of 20k");
    }
    else if(marks > 95){
        printf("congrats you got scholarship of 30k");
    }
    else{
        printf("sorry you did not get any scholarship");
    }
    return 0;
}