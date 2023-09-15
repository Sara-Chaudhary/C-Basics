#include<stdio.h>

int power(int a, int b);

int main(){
    int x, y,p;
    printf("Enter a number: \n");
    scanf("%d", &x);
    printf("Raised to the power: \n");
    scanf("%d", &y);
    p = power(x,y);
    printf("%d raised to power %d is: %d. \n", x, y , p);
    return 0;
}

int power(int a ,int b){
    int p;
    if(b == 0){
        return 1;
    } 
    else if(b == 1){
        return a ;
    }else{
        p = a * power(a , b-1);
    }
    return p;
}