#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char name[100];
    float cgpa;
};

int main()
{   
    struct student s1;
    s1.roll = 8;
    s1.cgpa = 8.67;
    strcpy(s1.name , "Pratik");

    printf("roll number : %d \n",s1.roll);
    printf("name : %s \n",s1.name);
    printf("cgpa : %f \n",s1.cgpa);
    return 0;
}