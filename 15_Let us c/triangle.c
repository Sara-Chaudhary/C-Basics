#include<stdio.h>

int main() {

    int i, j , k, n, t ;

    printf("type the no. of rows to be printed : ");
    scanf("%d", &n );
    
    
    for(i = 1 ; i <= n ; i++){   //i = rows , j = cloumns
          k = (2 * i) - 1;
        for(j = 1, t = 1 ; j <= k ; j++ ){
            printf("%d ",t); 
            if(j < i) {
               t++;
            } else {
                t--;
            }        
            
        }
        printf("\n");
        
    }
    return 0 ;

}