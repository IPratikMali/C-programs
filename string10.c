// add salting in string

#include<stdio.h>
#include<string.h>

void salt(char passwd[]);

int main()
{
    char passwd[10];
    printf("enter password :");
    scanf("%s", &passwd);
    salt(passwd);
    return 0;
}

void salt(char passwd[])
{
    char salt[]="123";
    char newpasswd[100];

    strcpy(newpasswd , passwd); // newpasswd = passwd
    strcat(newpasswd , salt);   // newpasswd + salt 

    puts(newpasswd);
}

/* output 

enter password : test
test123

*/