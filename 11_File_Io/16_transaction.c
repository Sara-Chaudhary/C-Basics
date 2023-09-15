#include<stdio.h>

typedef struct customer{
    int accno , balance ;
    char name[20];
} custm;

typedef struct transaction{
    int accno , balance ;
}trans;

int main(){
    trans t;
    int a , n ;
    printf("\nYou can:\n1.Add records\n2.Deposit money\n3.Withdraw\nEnter the number preceding your action. \nYou Choose:");
    scanf("%d", &n);
    switch(n){
        case 1: 
            Input();
            break;
        case 2:
            Deposit();
            break;
    }


    return 0;
}