#include<stdio.h>
int main(){
    int a = 'y';
    int *ptr = &a;
    int **pptr = &ptr;

    printf("\nValue of a: %d\n", a);
    printf("Value of a: %d\n", *ptr);
    printf("Value of a: %d\n", *(&a));
    printf("Value of a: %d\n", *(*pptr));
    printf("Value of a: %d\n", *(*(&ptr)));
    printf("Value of a: %d\n\n", *(*(*(&pptr))));

    printf("\nValue of ptr: %d\n", &a);
    printf("Value of ptr: %d\n", ptr);
    printf("Value of ptr: %d\n", *(&ptr));
    printf("Value of ptr: %d\n\n",*(*(&pptr)) );

    printf("\nValue of pptr: %d\n", &ptr);
    printf("Value of pptr: %d\n", pptr);
    printf("Value of pptr: %d\n\n", *(&pptr));

    return 0;

}