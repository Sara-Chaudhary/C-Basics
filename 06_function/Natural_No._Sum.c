#include<stdio.h>
int Sum(int n);
int main(){
    int num , sum ;
    printf("\nEnter the last number  : ");
    scanf("%d", &num);
    sum = Sum(num);
    printf("The sum of all natural numbers till %d is: %d\n\n", num ,sum);

    return 0;
}
int Sum(int n){
    int sum ;
    if(n == 1){
        return 1;
    } else {
        sum = n + Sum(n-1);
    }
    return sum ;
}