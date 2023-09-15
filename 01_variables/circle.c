#include<stdio.h>

int main(){

    int rad , height=0 ;
    float pi = 3.14;
    printf("Enter the value of radius : ");
    scanf("%d", &rad );
    printf("Enter the height of the cylinder : ");
    scanf("%d", &height );
    float area = rad * pi * rad ;
    printf("The area of circle is %f sq.meter \n", area );
    printf("The volume of cylinder is : %f cubic meter \n" , area * height );

    return 0;

}