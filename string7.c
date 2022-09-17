#include<stdio.h>
#include<string.h>

int main()
{
    char name1[100]="pratik " ;
    char name2[]="morgan";

    strcat(name1, name2);    
    puts(name1);
    return 0;
}