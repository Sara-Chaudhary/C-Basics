#include<stdio.h>

int Sum(int a, int b,int c,int d,int e);
float Average(int s);

int main(){
    int a , b , c , d , e , sum , avg;
    printf("\nEnter 5 numbers: \n");
    scanf(" %d %d %d %d %d", &a , &b , &c , &d , &e);
    sum = Sum(a,b,c,d,e);
    printf("The sum is: %d.\n",sum );
    avg = Average(sum);
    printf("The average is: %d.\n\n",avg);
    return 0;
}

int Sum(int a, int b,int c,int d,int e){
    int sum = a + b + c + d + e ;
    return sum ;
}

float Average(int s){
    int avg = s / 5;
    return avg;
}
