#include<stdio.h>

int main(){

    int number[5];

    for(int i = 0 ; i < 5 ; i++){

        printf("%d  number : " , i);
        scanf("%d",&number[i]);
    }

    for(int i = 0 ; i<5 ; i++){
        printf("%d \t",number[i]);
    }
    return 0 ;

}

/* output

0  number : 1
1  number : 2
2  number : 3
3  number : 4
4  number : 5
1       2       3       4       5 

*/