#include<stdio.h>


int main()
{
    int numb1 , numb2 , j ;

    printf("enter the number 1 ");
    scanf("%d",&numb1);
    printf("enter the number 2");
    scanf("%d",&numb2);

    for( int i = numb1 ; i <= numb2 ; i++ ){

        for( j = 2 ; j <= i  ; j++){

            if(i % j == 0){
                break;
            
            }
        
        }

        if(i == j){
            printf("%d \n",i);
    }

}
    
    


    return 0;

}