// write a program to insert an element into end of the array

#include<stdio.h>

int main(){

    int arr[10];
    int n, ele;

    printf("enter the number of elements : ");
    scanf("%d",&n);
    
    for(int i = 0 ; i < n ; i++){
        printf("enter the %d element : ",i);
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0 ; i<n ; i++){
        printf("%d element: %d \n",i,arr[i]);
    }

    printf("enter the element to insert :");
    scanf("%d",&ele);
    n++;
    arr[n-1] = ele;

    for(int i = 0 ; i<n ; i++){
        printf("%d element: %d \n",i,arr[i]);
    }
    
    return 0 ;
}

/* output :

enter the number of elements : 5
enter the 0 element : 2
enter the 1 element : 4
enter the 2 element : 7
enter the 3 element : 9
enter the 4 element : 2
0 element: 2 
1 element: 4
2 element: 7
3 element: 9
4 element: 2
enter the element to insert :13
0 element: 2 
1 element: 4
2 element: 7
3 element: 9
4 element: 2
5 element: 13

*/