#include<stdio.h>
void array_shift(int *arr_end , int *arr);
int main(){
    int array[7]={2,2,3,4,5,6,7};
    printf("\nOriginal Array: ");
    for(int i =0 ; i<7 ; i++){
        printf("%d ", array[i]);
    }
    printf("\nShifted Array: ");
    array_shift(&array[6], &array[0]);
    printf("\n");
    return 0;
}
void array_shift(int *arr_end , int *arr){
    for(int i =0 ; i<6 ; i++){
        arr[i]= arr[i+1];
    } 
     *arr_end = *arr ;
    for(int i =0 ; i<7 ; i++){
        printf("%d ", arr[i]);
    }
}