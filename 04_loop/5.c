// sum of all the value of number in table of 8.
#include<stdio.h>

int main(){
    int  i , sum = 0 , prod ;
    for(i = 1; i <= 10 ; i++ ){
        prod = 8 * i;
        sum = sum + prod ;
    }
    printf("%d\n", sum);

    return 0;
}