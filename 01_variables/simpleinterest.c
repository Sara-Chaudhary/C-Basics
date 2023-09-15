#include<stdio.h>

int main(){
    int price, time ;
    float rate  , si ; // si = simple interest 
    printf("Enter the principle cost : ");
    scanf("%d", &price );
    printf("Enter the rate of interest : ");
    scanf("%f", &rate );
    printf("Enter the time : ");
    scanf("%d", &time );
    si = price * rate * time / 100;
    printf("The simple interest is : %f \n" , si );
    printf("The total value after S.I is %f \n" , si + price );
    
    return 0;
}