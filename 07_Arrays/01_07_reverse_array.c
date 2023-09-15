#include<stdio.h>
void reverse(int *arr , int n);
int main(){
    int num , arr[9]= { 2, 4, 5, 6, 7, 1, 3, 5, 4};
    printf("\nOriginal array: ");
    for(int i = 0 ;i <= 8 ; i++){
        printf("%d\t", arr[i]);
    }
    reverse( &arr[0] , 9);
    printf("\nReversed array: ");
    for(int i = 0 ;i <= 8 ; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
    return 0;
}
void reverse(int *arr, int n){
    int temp ;
    for(int i = 0 ; i <= (n/2); i++ ){
        temp = arr[i];
        arr[i] = arr[n-i-1]; 
        arr[n-i-1] = temp ;
    }
}   