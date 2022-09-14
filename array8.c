// create a 2-D array , storing tables of 2 and 3 

#include<stdio.h>

int storetables(int arr[][10], int n , int m , int number);

int main(){

    int arr[2][10];

    storetables(arr , 0 , 10 , 2);
    storetables(arr, 1 , 10 , 3);

    for(int i = 0 ; i<10 ; i++){
        printf("%d \t",arr[0][i]);
    }
    printf("\n");
    for(int i = 0 ; i<10 ; i++){
        printf("%d \t",arr[1][i]);
    }
    return 0 ;

}

int storetables(int arr[][10], int n , int m , int number){

    for(int i = 0 ; i < m ; i++){
        arr[n][i] = number * (i+1);
    }
}

/* output

2       4       6       8       10      12      14      16      18      20 
3       6       9       12      15      18      21      24      27      30

*/