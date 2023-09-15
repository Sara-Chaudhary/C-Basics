// to give the power of a number using loop 
#include<stdio.h>

int main(){
    int a , b , pow = 1 ;
    printf("Enter a number : ");
    scanf(" %d", &a );
    printf("Enter another number : ");
    scanf("%d", &b);

    for(int i = 1 ; i <= b ; i++){
        pow = pow * a;
    }
    printf("%d to the power of %d is : %d \n", a , b , pow);
    return 0;
}