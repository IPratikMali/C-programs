#include<stdio.h>

int main()
{
    int rows , columns;
    printf("enter the rows and columns");
    scanf("%d %d",&rows,&columns);
    for(int i = 1 ; i <= rows ; i++){
        for(int j = 1 ; j <= columns ; j++){
            printf(" # ");
        }
    printf("\n");
    }

    return 0;

}