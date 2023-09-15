#include<stdio.h>
#define pi  3.14
float Area(int r );
int main(){
    int rad ; float area ;
    printf("\nEnter the radius of the circle: ");
    scanf("%d", &rad);
    area = Area(rad);
    printf("The area of the circle is: %f\n\n", area);
    return 0;
}
float Area(int r ){
    float area = pi * r * r;
    return area ;
}