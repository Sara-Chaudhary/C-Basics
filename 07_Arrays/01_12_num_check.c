#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void num_check(int*arr , int n);
int main(){
    int i , num ;
    srand(time(0));
    int array[50];
    for(i=0; i<=49 ; i++){
        array[i]= rand()%100+1;
    }
    printf("Type a number: ");
    scanf("%d" , &num);
    num_check(&array[0] , num);
    return 0;
}
void num_check(int*arr , int n){
    int count = 0;
    for(int i=0; i<=49 ; i++){
        if(arr[i]== n){
            count++;
        }
    }
    if(count != 0)
        printf("\nYes we have a match\nThe number %d appears %d times in the array.\n\n", n , count );
    else
        printf("\nSorry the number %d is not in the array.\n\n", n);
    
}
