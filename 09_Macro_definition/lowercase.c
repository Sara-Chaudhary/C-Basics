#include<stdio.h>
#define LOWER(x)(x >= 97 && x<= 122)
#define UPPER(x)(x >= 65 && x<= 90)

int main(){
    char ch ;
    printf("\nEnter a character: ");
    scanf("%c", &ch);
    if( LOWER(ch)){
        printf("You entered a lower case alphabet.\n\n");
    }
    else if( UPPER(ch)){
        printf("You entered a upper case alphabet.\n\n");
    } else {
        printf("Character is not an Alphabet.\n\n");
    }
    return 0;
}