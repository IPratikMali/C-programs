//take a string from user and print it's length

#include<stdio.h>

int main(){

    char name[100];
    printf("enter name :");
    fgets(name , 100 , stdin);
    
    int count = 0 ;
    for(int i = 0 ; name[i]!='\0'; i++){
        count++ ;
    }
    printf("%d",count-1);
    return 0;
}