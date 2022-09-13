#include<stdio.h>

int main()
{
    int marks[2][3]; // marks for 3 subjects of 2 students

    marks[0][0]= 80;
    marks[0][1]= 85;
    marks[0][2]= 83;

    marks[1][0]= 50;
    marks[1][1]= 65;
    marks[1][2]= 93;

    printf("marks of 1 student and 3rd subject is %d" , marks[0][2]);

    return 0;
}

/* output

marks of 1 student and 3rd subject is 83 
*/