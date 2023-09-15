#include<stdio.h>
void Prime(int *arr );
void Print_Prime(int *arr );
int main(){
    int array[100];
    for(int i =0 ; i<=99 ; i++){
        array[i]= i ; 
    }
    printf("\nThe prime numbers between 1 and 100 are :\n   ");
    Prime(&array[0]);
    Print_Prime(&array[0]);
    printf("\n\n");
    return 0;
}
void Prime(int *arr ){
    for(int i = 2 ; i<= 10 ; i++ ){
        for(int j = 2 ; j <= (100/i) ; j++){
            arr[i*j] = 0;
        }              
    }
}
void Print_Prime(int *arr){
    for(int i = 2 , j=1 ; i<=99 ; i++){
        if(arr[i] != 0){
            printf("%d.%d \t   ", j++ ,arr[i]);
        }
    }
}