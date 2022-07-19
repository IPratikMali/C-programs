#include<stdio.h>

void reply();

int main()
{
    reply();
    return 0;
}

void reply(){
    char ch;
    printf(" G for gujrati and M for marathi : \n");
    scanf("%c",&ch);

    if(ch == 'G'){
        printf("Kem Cho bhay");
    }
    else if(ch == 'M'){
        printf("kasa Ahes bhau");
    }
    else{
        printf("input is invalid");
    }

}