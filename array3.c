#include<stdio.h>

int main(){

    int product[3];

    printf("enter price of 3 products : ");
    scanf("%d",&product[0]);
    scanf("%d",&product[1]);
    scanf("%d",&product[2]);

    int total = 0.18 * (product[0]+product[1]+product[2]);
    int price = total + (product[0]+product[1]+product[2]);

    printf("total price is : %d", price);
    return 0; 
}

/* output

enter price of 3 products :  20
20
20
total price is : 70

*/