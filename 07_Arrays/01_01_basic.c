#include<stdio.h>
int main(){
    int marks[]={56, 87, 90, 43, 70, 87, 65, 76};
    char name[]={'a','b','c','d','e','f','g','h'};
    for(int i = 0 ; i<=7; i++){
        printf("\nStudent name:%c \t Marks:%d", name[i],marks[i]);
    }
    printf("\n\n");
    
    return 0;
}