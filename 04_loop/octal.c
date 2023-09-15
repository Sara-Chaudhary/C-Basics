// To print the octal equivalent of a decimal number given .
#include<stdio.h>

int main(){
    int num , temp , oct = 0 ,ten = 1;
    printf("Enter a number : ");
    scanf(" %d", &num );
    temp = num ;
    for(int i = 1 ; temp > 0 ; i++){
        oct = oct + (temp % 8) * ten ;
        temp = temp / 8;
        ten = ten * 10 ;
    }
    oct = oct + (temp % 8) * ten ;

    printf("The octal equivalent of %d is %d \n", num , oct );
    return 0; 

}