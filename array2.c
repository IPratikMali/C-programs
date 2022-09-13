#include<stdio.h>

int main()
{
    int marks[2];

    printf("enter marks for maths :");
    scanf("%d",&marks[0]);

    printf("enter marks for English :");
    scanf("%d",&marks[1]);

    printf("maths : %d english : %d",marks[0],marks[1]); 
    return 0 ;
}


/* output

enter marks for maths : 45
enter marks for English :54
maths : 45 english : 54

*/