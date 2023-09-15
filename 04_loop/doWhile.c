// programme to check if a number is a prime number or not .

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char another='y';
    int num = 0;
    do
    {
        printf("Enter a number ");
        scanf("%d", &num);
        printf("square of %d is %d", num, num * num);
        printf("\nWant to enter another number y/n ");
        scanf(" %c", &another);
    } while (another == 'y');
    printf("Thank You !!\n");

    return 0;
}