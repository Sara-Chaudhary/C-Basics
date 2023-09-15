#include<stdio.h>
int smallest(int*arr , int n);
int main(){
    int i;
    int array[10]={23,56,2,34,-5,86,-2,34,-14,28};
    printf("\nArray is: ");
    for(i=0; i<=9 ; i++){
        printf("%d\t",array[i]);
    }
    int s = smallest(&array[0], 9);
    printf("\nThe smallest number amongst the array is: %d\n\n", s);
    return 0;
}
int smallest(int*arr , int n){
    int s = arr[0] ;
    for(int i=0 ; i < n ; i++){
        if(arr[i+1] < s){
            s = arr[i+1];     
        }
    }
    return s;
}