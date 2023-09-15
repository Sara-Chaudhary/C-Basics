#include<stdio.h>
void Print_Array(int*p );
int main(){
    int i , num[5] , *ptr ;
    ptr = &num[0];
    printf("\n");
    for(i=0 ; i<=4 ; i++){
        printf("Enter a number: ");
        scanf("%d", &num[i]);
    }
    Print_Array(&num[0]);
    return 0;
}

void Print_Array(int*p){
    for(int i=0 ; i<=4 ; i++){
        printf("\nYou entered: %d", *p);
        p++;
    }
    printf("\n\n");
}