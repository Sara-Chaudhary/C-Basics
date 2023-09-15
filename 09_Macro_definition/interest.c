#include<stdio.h>
#include"interest.h"
int main(){
    int time , rate , principle ;
    printf("\nEnter the principle amount: ");
    scanf("%d",&principle);
    printf("\nEnter the rate of interest: ");
    scanf("%d", &rate);
    printf("\nEnter the time(in years): ");
    scanf("%d", &time);
    printf("The simple Interest for the following is:%d\n", SIMPLE_INTEREST(principle,rate,time));
    printf("So the total amount will be: %d\n\n", AMOUNT(principle,SIMPLE_INTEREST(principle,rate,time)));
    return 0;
}
