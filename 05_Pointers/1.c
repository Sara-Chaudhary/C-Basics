#include<stdio.h>
int main(){    
    char b = 'G' ;
    char *ch = &b;
    int a = 78 ;
    int *p = &a ;
; 

    printf("\nvalue of a: %d\n", a);
    printf("value of a: %d\n", *p);
    printf("value of a: %d\n", *(&a));

    printf("\naddress of a: %u\n", p);
    printf("address of a: %u\n", &a);
    printf("address of a: %u\n", *(&p));
    printf("\naddress of p: %u\n", &p);

    printf("\nvalue of b: %c\n", b);
    printf("value of b: %c\n", *ch);
    printf("value of b: %c\n", *(&b));

    printf("\naddress of b: %u\n", ch);
    printf("address of b: %u\n", &b);
    printf("address of b: %u\n", *(&ch));
    printf("\naddress of ch: %u\n\n", &ch);

    return 0;
}