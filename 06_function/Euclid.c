#include<stdio.h>
int Euclid(int a , int b);
int main(){
    int n1 , n2 ;
    printf("\nEnter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    int E = Euclid(n1 , n2);
    printf("The greatest common divisor of %d and %d is: %d.\n\n", n1 , n2 , E);
    return 0;
}
int Euclid(int a , int b){
    int temp = a % b ;
    if( temp == 0){
        return b ;
    } else {
        Euclid( b , temp);
    }
}