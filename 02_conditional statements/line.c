#include<stdio.h>

int main(){
    int x1 , y1 , x2 , y2 , x3 , y3;
    printf("Enter the x co-ordinate of first point : ");
    scanf("%d" , &x1 );
    printf("Enter the y co-ordinate of first point : ");
    scanf("%d" , &y1 );
    printf("Enter the x co-ordinate of second point : ");
    scanf("%d" , &x2 );
    printf("Enter the x co-ordinate of second point : ");
    scanf("%d" , &y2 );
    printf("Enter the x co-ordinate of third point : ");
    scanf("%d" , &x3 );
    printf("Enter the x co-ordinate of third point : ");
    scanf("%d" , &y3 );

    if (x1/y1 == x2/y2 == x3 /y3 ){
        printf("THe points lie in a straight line .");
    }
}
