#include<stdio.h>
#include<string.h>
int main(){
    char str1[20]="Hello this is ";
    char str2[20]="Sara .";
    strcat(str1 , str2);
    printf("\n%s\n\n", str1 );
    return 0;
}