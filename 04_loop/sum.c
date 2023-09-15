// To give sum of all the numbers before the given number .
#include<stdio.h>

int main(){
    int n , i, sum;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i =0 ; i<=n ; i++ ){
        sum = sum + i ;
    }
    printf("%d \n", sum);

    return 0;
}