/* to print Farhenheit-Celsius table*/

#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
int main(){
    float fahr , celsius ;
    fahr = LOWER;
    while(fahr <= UPPER){
        celsius = (5.0 /9.0) * (fahr - 32.0);
        printf("%f\t%f\n\a", fahr, celsius);
        fahr = fahr + STEP;
    }
    return 0;
}