#include<stdio.h>
int count_natural_no(int *arr , int n);
int main(){
    int array[]={-1,-2,3,-4,4,-6,3,2} ;
    int count = count_natural_no( &array[0] , 8);
    printf("\nThe no. of natural no. in the array are: %d \n\n", count);
    return 0;
}
int count_natural_no(int *arr , int n){
    int c = 0;
    for(int i =0 ; i < n ; i++){
        if( arr[i] > 0){
            c++;
        } else {
            continue;
        }
    }
    return c;
}