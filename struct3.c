#include<stdio.h>

struct student{
    int roll;
    char name[100];
    int marks;
};

int main()
{
    struct student s1 = {18 , "pratik" ,94};

    printf("information of student\n roll number : %d \n",s1.roll);
    printf("name : %s \n",s1.name);
    printf("marks : %d \n",s1.marks);

    return 0;
}

/* output

information of student
roll number : 18
name : pratik 
marks : 94

*/