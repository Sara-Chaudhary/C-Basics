#include<stdio.h>
void Checker(int *arr , int n);
int main(){
    int n , i ;
    printf("\nSize of array you want: ");
    scanf(" %d", &n);
    int array[n];
    for(i=0 ; i<n ; i++){
        printf("Enter value: ");
        scanf("%d", &array[i]);
    }
    Checker(&array[0] , n);
    printf("\n");
    return 0;
}
void Checker(int *arr , int n){
    int i ;
    for(i=0 ; i <= (n/2)-1 ; i++){
        if(arr[i] == arr[n-i-1]){
            printf("arr[%d] is equal to arr[%d] = %d .\n", i , (n - i - 1) , arr[i] );
        }
    }
}
