// print percentage of student from marks if maths , english and hindi by using function

#include<stdio.h>

float percentage(int m, int e , int h);

int main()
{
    int m , e , h ;
    printf("enter the marks for Maths : ");
    scanf("%d",&m);
    printf("enter the marks for English : ");
    scanf("%d",&e);
    printf("enter the marks for Hindi : ");
    scanf("%d",&h);

    printf("total percentage is : %f",percentage(m , e , h));
    return 0;

}

float percentage(int m, int e , int h){

    int total = (m + e + h ) / 3 ; 
    return total;
}

/* output

enter the marks for Maths : 95
enter the marks for English : 98
enter the marks for Hindi : 84
total percentage is : 92.000000

*/