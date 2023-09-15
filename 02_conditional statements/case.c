#include<stdio.h>

int main(){
    char given ;
    printf("Enter a character : ");
    scanf("%c", &given );

    if(given >='A' && given <= 'Z' ){
        printf("The character is an uppercase alphabet %c \n", given);
    }
    else if (given >= 'a' && given <= 'z'){
        printf("The character is a lowercase alphabet %c \n ", given );
    } else {
        printf("The given character is not an alphabet . \n");
    } 

    return 0;
}