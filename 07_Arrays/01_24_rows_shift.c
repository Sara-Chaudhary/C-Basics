#include<stdio.h>
void Row_shift(int *arr_end ,int *arr);
int main(){
    int i , j ,array[4][5];
    for( i =0; i<4 ;i++){
        for( j=0;j<5;j++){
            array[i][j] = j;
        }
    }
    printf("\nOriginal Array:\n");
    for( i =0; i<4 ;i++){
        for( j=0;j<5;j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    for( i =0; i<4 ;i++){
        Row_shift(&array[i][4], &array[i][0]); 
    } 
    return 0;
}
void Row_shift(int *arr_end , int *arr){
    for(int i =0 ; i<6 ; i++){
        arr[i]= arr[i+1];
    } 
     *arr_end = *arr ;
    for(int i =0 ; i<7 ; i++){
        printf("%d ", arr[i]);
    }
}