// To tell the no. of positive , negative and zeroes entered by user.
#include<stdio.h>

int main(){
    float number ; char x ;
    int pos , neg , zero ;
    pos = neg = zero = 0;
    do {
        printf("Enter a number : ");
        scanf("%f", &number );
        printf("Do you want to enter another number(y/n) : ");
        scanf(" %c", &x );

        if(number > 0){
            pos = pos + 1 ;
        }
        else if (number < 0){
            neg += 1;
        } else {
            zero += 1;
        }
    } while( x == 'y');
    printf("\nYou enter %d positive numbers .\nYou entered %d negative numbers .\nYou entered %d zero.\n", pos , neg , zero );

    return 0;

}

