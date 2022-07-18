#include<stdio.h>

int main()
{
    int numb , fcount = 0;

    printf("enter the number");
    scanf("%d",&numb);

    for(int i = 1 ; i <= numb ; i++){
        
        if(numb % i == 0){

            count++;
        }
    }

    if(count == 2){
        printf("number is prime number");
    }
    else{
        printf("number is not prime number");
    }
    return 0;

}
