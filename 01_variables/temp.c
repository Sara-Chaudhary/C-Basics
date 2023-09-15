#include<stdio.h>

int main(){
    float cel , far ; // cel = celsius , far = farenheit
    printf("Enter the temperature in celsius : ");
    scanf("%f" , &cel );
    far = cel * 9/5 + 32 ;
    printf("The tempetature in farenheit is : %f \n", far);

    return 0;
}