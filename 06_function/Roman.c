#include<stdio.h>

void Roman(int y);

int main(){
    int year;
    printf("Enter a year:");
    scanf("%d", &year );
    Roman(year);
    return 0;
}

void Roman(int y){
    for(int i = 0 ; y >= 1 ; i++){
        if( y >= 1000){
            printf("m");
            y = y - 1000;
            continue;
        }
        else if( y >= 500){
            printf("d");
            y = y - 500;
            continue;
        } 
        else if(y>= 100){
            printf("c");
            y= y -100;
            continue;
        }
        else if(y>= 50){
            printf("l");
            y= y -50;
            continue;
        }
        else if(y>= 10){
            printf("x");
            y= y -10;
            continue;
        }
        else if(y>= 5){
            printf("v");
            y= y -5;
            continue;
        }
        else if(y>= 1){
            printf("i");
            y= y -1;
        }
    }
    printf("\n");
}