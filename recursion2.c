// print sum of 1 to n natural numbers by using recusive function

#include<stdio.h>

int sum(int numb);

int main()
{
    int numb;
    printf("enter the numb");
    scanf("%d",&numb);

    printf("sum is : %d",sum(numb));
    return 0;
}

int sum(int numb){

    if(numb == 1){
        return 1;  // sum(1) is 1
    }
    int sumN1 = sum(numb - 1); // sum of 1 to n
    int total = sumN1 + numb ;
    return total;
}

/* output 

enter the numb 10
sum is : 55

*/

