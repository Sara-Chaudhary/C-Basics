#include<stdio.h>

int fac(int n);
int main(){
    int a , f;
    printf("Enter a number: \n");
    scanf(" %d", &a);
    f = fac(a);
    printf("The factorial of %d is: %d\n", a, f );
    return 0;
}

int fac(int n){
    if(n == 1){
        return 1;
    } else {
        return n * fac(n-1);
    }
}