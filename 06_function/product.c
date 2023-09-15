#include<stdio.h>

float product(int a, float b);

int main(){
    int x; float y, pro;
    printf("\nEnter a number : ");
    scanf("%d", &x);
    printf("Enter another number : ");
    scanf("%f", &y);
    pro = product(x,y);
    printf("The product is: %f\n\n", pro);
    return 0;
}

float product(int a , float b){
    float pro = a * b;
    return pro;
}