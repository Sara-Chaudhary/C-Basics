#include<stdio.h>
#include<math.h>

float Area_Triangle(int a, int b , int c);
int main(){
    int x,y,z ;
    printf("\nEnter the side of a triangle:");
    scanf("%d", &x);
    printf("Enter the second side: ");
    scanf("%d", &y);
    printf("Enter the third side: ");
    scanf("%d", &z);
    float area = Area_Triangle(x,y,z);
    printf("The area of the triangle is: %f\n\n", area);
    return 0;
} 

float Area_Triangle(int a , int b ,int c){
    int s = (a + b + c)/2 ;
    float ar = sqrt( (s*(s-a)*(s-b)*(s-c)) );
    return (ar);
}