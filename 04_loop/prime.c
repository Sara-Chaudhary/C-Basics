// programme to check if a number is a prime number or not .

#include<stdio.h>

int main(){
    int n , i , div ;
    printf("Enter the number : ");
    scanf("%d", &n);

    for(i = 2 ; i< n ; i++){
        div = n%i;
        if(div == 0){
            printf("The number %d is not a prime number . \n", n);
            break;
        } else {
            continue;
        }           
    }
    if ( i = n && div != 0){
        printf("The number %d is a prime number . \n", n);
    }
    return 0;
}