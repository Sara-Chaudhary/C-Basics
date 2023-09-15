#include<stdio.h>
#include<string.h>
int main(){
    char *str1 = "Thank";
    char *str2 = "Thanks";
    int val =strcmp(str1 ,str2); // should print a negative number
    printf("\n%d", val);
    str1="Thanks";
    str2="Thank";
    val =strcmp(str1 ,str2); // should print a positive number  
    printf("\n %d", val);
    str1="Thanks";
    str2="Thanks";
    val =strcmp(str1 ,str2);
    printf("\n %d \n", val); // same strings should print 0;
    return 0;
}