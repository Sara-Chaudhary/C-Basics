#include<stdio.h>
int Fib(int n);
int main(){
    int num;
    printf("\nEnter the number: ");
    scanf("%d", &num);
    int fib = Fib(num);
    printf("The %d term in Fibonacci series is %d\n", num , fib);
    return 0;
}
int Fib(int n){
    int fib = 0 ;
    if (n == 1){
        return 0;
    } 
    else if( n == 2){
        return 1;
    } else {
        fib = Fib(n-2) + Fib(n-1);
        return fib;
    }
}