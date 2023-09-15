#include<stdio.h>
#include<stdlib.h>
 
 
int main(){
    int *ptr  ,n;
    printf("\nEnter the no of values you want to input: ");
    scanf("%d", &n);
    ptr = (int *) malloc(n * sizeof(int)); 
    printf("\n");
    for(int i =0 ; i<n ; i++){
        printf("Enter the value of %d number: ", i+1);
        scanf("%d", &ptr[i]);
    }
    printf("\n");
    for(int i =0 ; i<n ; i++){
        printf("The value of %d number: %d\n", i , ptr[i]);
    }    
    printf("\n");
    return 0;
}