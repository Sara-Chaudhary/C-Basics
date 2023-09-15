#include<stdio.h>

void Leap(int a);

int main(){
    int year, check;
    printf("Enter a year: ");
    scanf("%d", &year);
    Leap(year);
    return 0;
}

void Leap(int a){
    if (a % 4 == 0){
        printf("Hurray!!\nIt is a Leap Year.\nOh no !!\nOne more Working Day.\n");
    } else {
        printf("Sorry , Not a Leap Year .\n");
    }
}