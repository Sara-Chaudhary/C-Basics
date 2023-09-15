#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void num_sort(int*arr , int n);
int main(){
    int i , num ;
    srand(time(0));
    int array[50];
    for(i=0; i<=49 ; i++){
        array[i]= rand();
    }
    num_sort(&array[0] , num);
    return 0;
}
void num_sort(int*arr , int n){
    int positive=0 , negative=0 , even=0 , odd=0 ,i;
    for(i=0 ; i<=49 ; i++){
        if(arr[i]%2==0)
            even++;
        else if(arr[i]%2 != 0)
            odd++;
        if(arr[i] >= 1)
            positive++;
        else if(arr[i] < 0)
            negative++;
    }
    printf("\nThe no. of odd  no. in the array are: %d\n", odd);
    printf("The no. of even no. in the array are: %d\n", even);
    printf("The no. of positive no. in the array are: %d\n", positive);
    printf("The no. of negative no. in the array are: %d\n\n", negative);
}