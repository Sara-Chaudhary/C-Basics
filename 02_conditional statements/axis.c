#include<stdio.h>

int main(){
    int x , y;
    printf("Type the x co-ordinate of a point : ");
    scanf("%d", &x );
    printf("Type the y co-ordinate of a point : ");
    scanf("%d", &y);

    if( x == 0 && y != 0){
        printf(" The point lies on the x - axis \n");
    }
    else if( y = 0 && x != 0) {
        printf("The point lies on the y-axis\n");
    }
    else if(x == 0 && y == 0){
        printf("The point is the origin \n");
    }  
    return 0;
}