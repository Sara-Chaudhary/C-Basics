#include<stdio.h>
int main(){
    char s[]={'S','w','a','r','n','i','m','\0'};
    char A[]="Sara Chaudhary";
    char *str = s;
    char *str1 = A;
    while(*str1 != 0){
        printf("%c", *str1);
        str1++;
    }
    printf("\n");
     while(*str != 0){
        printf("%c", *str);
        str++;
    }
    printf("\n");
    return 0;
}