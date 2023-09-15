#include<stdio.h>
#define COMPARE(x,y)(x > y)
int main(){
    int a , b;
    printf("\nEnter two numbers:\n");
    scanf("%d %d", &a , &b);
    if(COMPARE(a,b)){
        printf("The greater out of the two is: %d.\n\n", a);
    } 
    else if(a==b){
        printf("Both are equal.\nI am not Dumb.\n\n");
    }else{
        printf("The greater out of the two is: %d.\n\n", b);
    }
    return 0;
}