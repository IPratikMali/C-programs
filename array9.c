// in an array , find how many times a number 'x' occurs;

#include<stdio.h>

int repeat(int arr[], int n , int numb);

int main(){

    int a[10]={1,3,3,3,4,5,6,3,2,2};

    for(int i = 0 ; a[i]<10 ; i++){
        int occur = repeat(a , 10 , a[i]);
        printf("%d occurs %d times \n",a[i],occur );

    }
    
    return 0;
}

int repeat(int arr[] , int n , int numb){

    int count = 0;
    for(int i = 0 ; arr[i] < n ; i++){
        if(arr[i] == numb){
            count++;
        }
    }   
    return count;
}

/* output

1 occurs 1 times 
3 occurs 4 times 
3 occurs 4 times 
3 occurs 4 times 
4 occurs 1 times 
5 occurs 1 times 
6 occurs 1 times 
3 occurs 4 times 
2 occurs 2 times 
2 occurs 2 times 

*/