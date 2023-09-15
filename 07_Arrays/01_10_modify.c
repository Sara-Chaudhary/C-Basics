#include<stdio.h>
void modify(int *arr, int n);
int main(){
    int i ;
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    printf("\nOriginal array: ");
    for(i = 0; i<=9 ; i++){
        printf("%d\t", array[i]);
    }
    modify(&array[0], 10);
    printf("\nNew array: \t");
    for(i=0 ; i <= 9; i++){
        printf("%d\t", array[i]);
    }
    printf("\n\n");
    return 0;
}
void modify(int *arr, int n){
    for(int i=0; i<=9 ;i++){
        arr[i]= arr[i]*5;
    }
}