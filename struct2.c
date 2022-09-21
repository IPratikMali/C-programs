//write a program to store 3 student's details using structure

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

    printf("\n");

    struct student s2;
    s2.roll = 15;
    s2.cgpa = 8.97;
    strcpy(s2.name , "smith");

    printf("roll number : %d \n",s2.roll);
    printf("name : %s \n",s2.name);
    printf("cgpa : %f \n",s2.cgpa);

    printf("\n");

    struct student s3;
    s3.roll = 38;
    s3.cgpa = 8.87;
    strcpy(s3.name , "morgan");

    printf("roll number : %d \n",s3.roll);
    printf("name : %s \n",s3.name);
    printf("cgpa : %f \n",s3.cgpa);

    return 0;
}