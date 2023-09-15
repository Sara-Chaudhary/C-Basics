#include<stdio.h>
int main(){
    int n = 3;
    int table[3][10];
    for(int i = 0 ; i<=2 ; i++ ){
        for(int j = 1 ; j<=10 ; j++){
            table[i][j-1] = n * j;
        }
        n = n+2;
    }
    printf("\n");
    for(int i = 0 ; i<=2 ; i++ ){
        for(int j = 0 ; j<=9 ; j++){
            printf("%d\t", table[i][j]);
        }
        printf("\n\n");       
    }

}