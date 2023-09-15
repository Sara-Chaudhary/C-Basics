#include<stdio.h>

int main(){
    int per , E , H , M , S , SST ;
    printf("Enter your Marks in English : ");
    scanf("%d" , &E );
    printf("Enter your Marks in Hindi : ");
    scanf("%d" , &H );
    printf("Enter your Marks in Maths : ");
    scanf("%d" , &M );
    printf("Enter your Marks in Science : ");
    scanf("%d" , &S );
    printf("Enter your Marks in Social Studies : ");
    scanf("%d" , &SST );

    per = (E + M + H + S + SST )/5;

    printf("Your percentage is %d percent . \n" , per );

    if(per >= 90 && per <= 100){
        printf("Your grade is A\n");
    }
    else if(per >= 80){
        printf("Your grade is B \n");
    }
    else if(per >=70){
        printf("Your grade is C\n");
    }
    else if(per >= 60){
        printf("Your grade is D\n");
    } else {
        printf("Your grade is E \n");
    }

    return 0;
}