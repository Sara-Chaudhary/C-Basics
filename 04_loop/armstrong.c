// the number whose sum of cube of digits is equal to itself is armstrong number . (153 = 1x1x1 + 5x5x5 +3x3x3) 
#include<stdio.h>


int main(){
    int i , num , digit ,sum ;
    printf("The armstrong number between 1 and 500 are : ");
    for(i = 0  ; i<=500 ; i++){
        num= i;
        sum = 0;
        while(num > 0){
            digit = num % 10;
            sum = sum + (digit * digit * digit);  
            num = num / 10 ;  
        }              
         if(sum == i){
            printf("%d,\n" , i);
        }              

    }
    return 0;
}