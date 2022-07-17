#include<stdio.h>

int main()
{
    int numb , fact = 1;

    printf("enter the number");
    scanf("%d",&numb);
    for(int i = numb ; i >0 ; i--){
        
        fact = fact * i; 

    
    }
    printf("factorial is %d \n",fact);  
    
    
    return 0;

}