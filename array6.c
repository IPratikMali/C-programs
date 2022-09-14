// reverse an array

#include<stdio.h>

int main()
{
    int arr[4];

    for(int i = 0 ; i<4 ; i++){

        printf("enter %d array :",i);
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0 ; i<4 ; i++){
        printf("%d \t ",arr[i]);
    }

    for(int i = 0 ; i<4/2 ; i++){
        int first = arr[i];
        int second = arr[4-i-1];

        arr[i] = second;
        arr[4-i-1] = first;
        
    }
    printf("\n reverse array : \n");
    for(int i = 0 ; i<4 ; i++){
        printf("%d \t",arr[i]);
    }

    return 0;
}

/* output 

enter 0 array : 1
enter 1 array :2
enter 2 array :3
enter 3 array :4
1        2       3       4       
reverse array :
4       3       2       1

*/