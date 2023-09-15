#include<stdio.h>

int main() {

    int i, j , n , a = 1 , clm = 1 , b ;

    printf("type the no. of rows to be printed : ");
    scanf("%d", &n );
    
    
    for(i = 1 ; i <= n ; i++){   //i = rows , j = cloumns
          
        for(j = 1 ; j <= clm ; j++ ){
            if(j <= i){
                printf(" %d" , a );
                a++ ;
            }
            
            else{
                b--;
                printf(" %d" , b);
            }
           
            
        }
        b = a ;
        clm = clm + 2;
        a = 1 ;
        printf("\n");
        
    }
    return 0 ;

}