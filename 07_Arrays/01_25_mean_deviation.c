#include<stdio.h>
#include<math.h>
int Mean(int *arr);
void Devi(int *arr ,int mean , int n);
int main(){
    int i ;
    int array[]={-6,-12,8,13,-11,6,-9,7,2,-5,-10,11,10,9,2};
    printf("\nThe array is: ");
    for(i=0 ; i<15 ; i++){
        printf("%d , ", array[i]);
    }
    printf("\nMean of the array values is: %d \n" , Mean(&array[0]));
    Devi(&array[0], Mean(&array[0]) , 15 );
    return 0;
}
int Mean(int *arr){
    int mean =0;
    for(int i=0;i<15;i++){
        mean = mean + arr[i];
    }
    return( mean/15 );
}
void Devi(int *arr, int mean, int n){
    int sum = 0;
    for(int i=0; i<n ;i++){
        sum = sum + pow( (arr[i] - mean) , 2);
    }
    int devi = sqrt(sum /n);
    printf("The standard deviation is: %d\n", devi);
}