#include<stdio.h>
int Sum_Digit(int n);
int main(){
    int number , sum;
    printf("Enter a number of 6 digits: ");
    scanf("%d", &number);
    sum = Sum_Digit(number);
    printf("The sum of digits of the number is :%d .\n", sum);
    return 0;
}
int Sum_Digit(int n){
    int sum , digit ;
    if (n == 0){
        return 0;
    } else {
        digit = n % 10 ;
        sum = digit + Sum_Digit(n / 10);
    }
    return sum ;
}