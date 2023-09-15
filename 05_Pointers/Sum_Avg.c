// Use pointers make a program to return sum and average of 2 numbers with a void function .

#include<stdio.h>
void Sum_Avg(int a , int b, int *sum , float *avg);
int main(){
    int n1, n2 , sum =0;
    float avg = 0;
    printf("\nEnter a number: ");
    scanf("%d", &n1);
    printf("Enter a number: ");
    scanf("%d", &n2);
    Sum_Avg(n1 ,n2 ,&sum ,&avg );
    printf("The sum is: %d\n",sum);
    printf("The average is: %f\n\n", avg);
    return 0;
}

void Sum_Avg(int a, int b, int *sum , float *avg){
    *sum = a + b;
    *avg = (float)*sum / 2;
}
