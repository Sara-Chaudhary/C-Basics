#include<stdio.h>

int main(){
    int n , total = 21 , temp ;
    char x;

    printf("\n Hello.\n Welcome to the Matchstick Game.\n The game is quiet easy to understand.\n\n");
    printf(" The rules are :\n 1.There are total 21 marchsticks.\n 2.At a time you can pick either 1 , 2 , 3 or 4 matchstick out the total.\n 3.Computer will choose after you.\n 4.The player to pick the last matchstick losses.\n");
    printf("\n Are you ready (y/n): ");
    scanf(" %c", &x );

    if(x == 'y'){
        do {
            printf(" Enter your choice : ");
            scanf(" %d", &n );
            if (n<5 && n>0){
                total = total - n ;
            }
            
            if(n == 4){
                temp = total - 1;
                printf(" Matchsticks left : %d \n\n The Computer choose 1 .\n So Matchsticks left : %d \n\n", total , temp);
            }
            else if (n ==3){
                temp = total -2;
                printf(" Matchsticks left : %d \n\n The Computer choose 2 .\n So Matchsticks left : %d \n\n", total , temp);
            }
            else if (n ==2){
                temp = total - 3;
                printf(" Matchsticks left : %d \n\n The Computer choose 3 .\n So Matchsticks left : %d \n\n", total , temp);
            }
            else if (n ==1){
                temp = total - 4;
                printf(" Matchsticks left : %d \n\n The Computer choose 4 .\n So Matchsticks left : %d \n\n", total, temp);
            } else {
                printf(" Invalid number choice.\n Can only choose between 1 , 2 , 3 , 4 .\n Try Again.");
                continue;
            }
            total = temp;

        }while ( total > 1);
        printf(" Since only 1 matchstick is lest as your choice.\n\n You Lose\n Better Luck next time .\n ");

    }

    return 0;
}