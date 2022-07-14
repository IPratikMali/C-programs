#include<stdio.h>
int main()
{
    // in AND both statement should be true otherwise it will return false;
    printf("%d\n", 5>4 && 7>6);
    printf("%d\n", 5<4 && 7<6);
    printf("%d\n", 5>4 && 7<6);
    // in OR if one statement is true and other is false then it will return true;
    printf("%d\n", 5>4 || 7>6);
    printf("%d\n", 5<4 || 7<6);
    printf("%d\n", 5>4 || 7<6);
    // in NOT it will print opposite result ;
    printf("%d\n", !(5>4 || 7<6));
    printf("%d\n", !(5<4 && 7<6));
    return 0;

}