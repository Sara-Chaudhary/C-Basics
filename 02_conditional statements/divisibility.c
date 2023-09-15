#include<stdio.h>

int main(){
    int a , b ;
    printf("Type the no. you want to check : ");
    scanf("%d", &a );
    printf("Check the divisibility by : ");
    scanf("%d", &b );
    if (a % b == 0 ){
        printf("%d is divisible by %d .\n" , a ,b);
    } else {
        printf("%d is not divisible by %d . \n" , a , b);
    }
    return 0;
}