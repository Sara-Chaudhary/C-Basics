#include<stdio.h>
#include"macro.h"
int main(){
    // to make uppercase to lowercase 
    char ch;
    printf("Enter a Capital Alphabet: ");
    scanf("%c", &ch);
    printf("%c\n\n", UPPER_LOWER(ch));

    // to give of two numbers
    int n ,n2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &n ,&n2);
    printf("The mean: %d\n\n", MEAN(n,n2));

    return 0;
}