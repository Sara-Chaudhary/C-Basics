#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int RockPaperScissor(char comp , char player){
    // 0 --> draw , 1 --> player win , -1 --> comp win
    //for r/r , p/p , s/s  
    if(comp == player){ 
        return 0;
    }
    // for other possibilities  r/p , p/r ; s/p , p/s ; s/r , r/s;
    if(comp == 'r' && player == 'p'){
        return 1;
    }
    else if(comp == 'p' && player == 'r'){
        return -1;
    }
    if(comp == 's' && player == 'p'){
        return -1;
    }
    else if(comp == 'p' && player == 's'){
        return 1;
    }
    if(comp == 's' && player == 'r'){
        return 1;
    }
    else if(comp == 'r' && player == 's'){
        return -1;
    }
}
int main(){
    char you , comp;
    int result , n;
    srand(time(0));
    n = rand()%100 +1;
    if(n <33){
        comp = 'r';
    } 
    else if( n > 33 && n < 66){
        comp = 'p';
    } else {
        comp = 's';
    }
    printf("\nEnter,\n'r' for choosing rock\n's' for choosing scissor\n'p' for choosing paper\n: ");
    scanf(" %c", &you);

    result = RockPaperScissor(comp , you);
    if(result == 0){
        printf("\nYour Choice: %c \nComputer's choice: %c \nIts a DRAW !\n",you , comp);
    }
    else if(result == 1){
        printf("\nYour Choice: %c \nComputer's choice: %c \nYOU WIN !\n",you , comp);
    }
    if(result == -1){
        printf("\nYour Choice: %c \nComputer's choice: %c \nYOU LOSE!\n",you , comp);
    }
    return 0;
}
