#include<stdio.h>

int main(){
    int n = 6 , i , j ,k , l;
    for( i = 1; i<= n ; i++){
        int t = 0 ;
        for(j = n; j >= i; j--){
            printf("%d ", ++t);          
        } 
        for (l= 0 ; l <= j-1; l++){
            printf("  ");
            t++;
        }
        for (k=1 ; k < j ; k++){
            printf("  ");
            t--;
        }
        for( j=0 ; t >1 ; j++){
            printf("%d " , --t);
            
        }         
       printf("\n");


    }
    return 0;
}