#include<stdio.h>
int main(){
    char name[30];
    printf("\nEnter your name: ");
    gets(name);
    printf("Your name is: %s .\n", name );
    return 0;
}