#include<stdio.h>
#include"areaperi.h"

int main(){
    int sq ,base , height, side , choice ;
    printf("\nHello.\nWhat would you like to do today.\nYou can calculate:\n1.Area of triangle\n2.Area of Square\n3.Perimeter of triangle\n4.Perimeter of square.\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Enter the base of triangle:\n");
            scanf("%d", &base);
            printf("Enter the height of triangle:\n");
            scanf("%d", &height);
            printf("The Area of Triangle is %d \n\n", AREA_TRI(base,height));
        break;
        case 2:
            printf("Enter the side of square:\n");
            scanf("%d", &sq);
            printf("Area of the square is:%d\n\n", AREA_SQUARE(sq));
        break;
        case 3:
            printf("Enter all the sides of triangle: \n");
            scanf("%d %d %d",&side,&base,&height);
            printf("The perimeter of the triangle is: %d\n\n", PERI_TRI(side,base,height));
        break;
        case 4:
            printf("Enter the side of square: ");
            scanf("%d", &sq);
            printf("The perimeter of square is: %d\n\n", PERI_SQUARE(sq));
        break;          
    } 
    return 0;
}