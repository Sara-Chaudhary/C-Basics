#include <stdio.h>
int fun();

int main(){
    int a ;
    a = fun();
    printf(" %c\n", a);
    return 0;
}

int fun() {
    char ch;
    printf("\nEnter any alphabet ");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90){
        return ch;
    } else {
        return ch + 32;
    }
}