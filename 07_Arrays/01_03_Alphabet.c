#include <stdio.h>
int main(){
    int array[26];
    for (int i = 0; i <= 25; i++){
        array[i] = 'A' + i;
        printf("\nAlphabet: %c \tAscii_Value: %d\t\tAlphabet: %c\tAscii_Value: %d ", array[i], array[i], array[i]+32, array[i]+32);
    }
    printf("\n\n");
    return 0;
}