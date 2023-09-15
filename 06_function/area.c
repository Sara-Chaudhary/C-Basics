#include<stdio.h>

int Area(int a);

int main(){
    int n;
    printf("Enter the side of square : \n");
    scanf(" %d", &n);
    n = Area(n);
    printf("The area of the square is %d .\n", n);
    return 0;
}

int Area(int a){
    a = a * a;
    return a;
}