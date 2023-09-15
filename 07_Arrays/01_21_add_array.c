#include<stdio.h>
int main(){
    int array1[6][6] ;
    int array2[6][6] ;
    for(int i=0 , m=10; i<6 ;i++){
        for(int j=0 ; j<6 ; j++ ){
          array1[i][j] = array2[i][j] = m++;
        }
    }
    for(int k=0 ; k<2 ;k++){
        printf("\nArray:\n");
        for(int i=0 , m=10; i<6 ;i++){
            for(int j=0 ; j<6 ; j++ ){
                printf(" %d ", array1[i][j]);
            }
            printf("\n");
        }
    }
    printf("\nThe sum of two arrays is : \n");
    for( int i=0 ; i<6 ;i++){
        for(int j=0 ; j<6 ; j++){
           printf(" %d ", array1[i][j] + array2[i][j]); 
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
