#include <stdio.h>
int Counter(char *st, char c);
int main(){
    char ch;
    char str[30];   
    printf("Enter the string: ");
    scanf(" %[^\n]s ", str);
    printf("Enter the character you want to check:");
    scanf(" %c", &ch);
    int a = Counter(&str[0], ch);
    if (a == 0){
        printf("No.\nThe character %c is not in the string.\n", ch);
    } else {
        printf("The character \'%c\' is %d time in the string.\n", ch, a);
    }
    return 0;
}
int Counter(char *st, char c){
    int i = 0, count = 0;
    for(i=0 ; st[i] != '\0' ; i++){
        if (st[i] == c){
            count++;
        }
    }
    return count;
}