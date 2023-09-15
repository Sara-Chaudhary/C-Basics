#include<stdio.h>

int main(){
    int i = 0 , j = 0, n = 5, k ;
    int s = n - i ;    
    for(i = 0 ; i <= n ; i++){
        
        for( k = j ; k <= s ; k++){
            printf(" ");
        }
        for(j= 0; j <= i ; j++ ){
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}