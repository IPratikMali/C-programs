// write a program to store first n fibonacci numbers

#include<stdio.h>

int main(){

    int n;

    printf("enter the n (n > 2):");
    scanf("%d",&n);

    int fib[n];
    fib[0]= 0;
    fib[1]= 1;

    printf("%d \t %d \t", fib[0],fib[1]);
    for(int i = 2 ; i<n ; i++){
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d \t",fib[i]);
    }
    return 0 ;
}

/* ouput

enter the n (n > 2): 10
0        1      1       2       3       5       8       13      21      34

*/