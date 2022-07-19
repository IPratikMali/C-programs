#include<stdio.h>

void hello();
void namaste();

int main()
{
    char ch;
    printf("E for english and H for hindi :: \n");
    scanf("%c",&ch);

    if(ch == 'E'){
        hello();
    }
    else{
        namaste();
    }
    return 0;

}

void namaste(){
    printf("namaaste");
}

void hello(){
    printf("hello");
}