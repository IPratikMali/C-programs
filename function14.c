// write a function to print "hot or cold" depending on the given temperature by user

#include<stdio.h>

void hot();
void cold();

int main()
{
    float temp;
    printf("enter the temperature : ");
    scanf("%f",&temp);

    if(temp >= 30){
        hot();
    }
    else{
        cold();
    }
    
    return 0;

}

void hot(){

    printf("Hot");
    
}

void cold(){

    printf("Cold");
}


/* output

enter the temperature : 10.52
Cold

*/

