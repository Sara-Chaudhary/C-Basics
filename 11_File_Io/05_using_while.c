#include<stdio.h>

int main(){
    FILE *ptr;
    char c;
    ptr = fopen("sample2.txt","r");
    while(c != EOF){
        printf("%c", c);
        c = fgetc(ptr);
    }
    printf("\n");
    return 0;
}