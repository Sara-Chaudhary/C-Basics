#include<stdio.h>

int main(){
    int a ,b ,c , d ;
    printf("Type a number : ");
    scanf("%d" , &a);
    printf("Type a number : ");
    scanf("%d" , &b);
    printf("Type a number : ");
    scanf("%d" , &c);
    printf("Type a number : ");
    scanf("%d" , &d);

    if (a > b && a > c && a > d){
        printf("The greatest no. among the four is %d \n" , a);
    }
    else if (b > a && b > c && b > d){
        printf("The greatest no. among the four is %d \n" , b);
    }
    else if (c > b && c > b && c > d){
        printf("The greatest no. among the four is %d \n" , c);
    }
    else if (d > b && d > c && d > a){
        printf("The greatest no. among the four is %d \n" , d);
    }
    return 0;

}