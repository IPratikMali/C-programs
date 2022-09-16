// write program to find largest number in an array

#include<stdio.h>

int main(){

    int arr[10]={3,6,8,7,3,2,1,3,6,2};

    for(int i = 1 ; arr[i]<10 ; i++){
        if(arr[0] < arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("large element is %d",arr[0]);
    return 0;
}

/* output:

large element is 8

*/