// slicing of string 

#include<stdio.h>

void slice(char name[] , int n, int m);

int main()
{
    char name[100];
    int n ,m ;
    printf("enter string:");
    scanf("%s",&name);
    puts(name);
    printf("enetr N and M :");
    scanf("%d %d", &n , &m);

    slice(name , n , m);
    return 0;

}

void slice(char name[] , int n , int m)
{
    char newstr[100];

    int j = 0;
    for(int i = n ; i <= m ; i++ )
    {
        newstr[j] = name[i];
        j++;
    }
    newstr[j] = '\0';
    puts(newstr);
}

/* output

enter string: pratik
pratik
enetr N and M :2 4
ati

*/