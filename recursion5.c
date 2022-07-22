// find the sum of digits of gven numbers using function

#include<stdio.h>

int sum(int numb);
int main()
{
    int numb;
    printf("enter the number :");
    scanf("%d",&numb);

    printf("sum of digit is : %d",sum(numb));
    return 0;

}

int sum(int numb){
    if(numb == 0){
        return 0 ;
    }
    int rem = numb % 10 ;
    int total = rem + sum(numb / 10);
}


/* output

enter the number : 14456
sum of digit is : 20

*/



/* Logic 

Step 1-> 12345 % 10 which is equal-too 5 + ( send 12345/10 to next step ) 
Step 2-> 1234 % 10 which is equal-too 4 + ( send 1234/10 to next step ) 
Step 3-> 123 % 10 which is equal-too 3 + ( send 123/10 to next step ) 
Step 4-> 12 % 10 which is equal-too 2 + ( send 12/10 to next step ) 
Step 5-> 1 % 10 which is equal-too 1 + ( send 1/10 to next step ) 
Step 6-> 0 algorithm stops 

*/