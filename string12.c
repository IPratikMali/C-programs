// write a program to check numbers of vowels in given string
#include<stdio.h>

int vowels(char name[]);

int main()
{
    char name[100];
    printf("enter name :");

    scanf("%s",&name);
    
    printf("vowels are %d " , vowels(name));

    return 0;
}

int vowels(char name[])
{
    int count = 0;
    for(int i = 0 ; name[i] != '\0' ; i++)
    {
        if(name[i]=='a'|| name[i]=='e'|| name[i]=='i'|| name[i]=='o'|| name[i]=='u')
        {
            count++;
        }
    }
    return count;
}

/* output

enter name :pratik
vowels are 2 

*/