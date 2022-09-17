// write a program to find length of string using string function

#include<stdio.h>
#include<string.h>

int main(){
    
    char a[100];
    printf("enter the string :");
    gets(a);

    int length = strlen(a);
    printf("length : %d",length);
    return 0;

}

/* output:

enter the string :pratik
length : 6

*/