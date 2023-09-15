#include <stdio.h>
#include<stdio.h>


int main(){
     float sum = 0 , pro , x; 
     int i=2;
    printf("Enter a number :");
    scanf(" %f", &x); 
    sum = (x-1)/x; 

    while( i <= 7){
        pro = pow(((x-1)/x) , i);
        sum = sum + (0.5 * pro);
        i++;
    }    
    printf("The natural log of %1.0f is %f \n", x , sum );
    return 0;
}