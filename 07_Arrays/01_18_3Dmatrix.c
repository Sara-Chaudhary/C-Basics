#include<stdio.h>
int biggest(int *arr );
int main(){
    int array[2][3][2] , i ,j ,k , n=0;
    for(i=0 ; i<2 ;i++){
        for(j=0 ; j<3 ;j++){
            for(k =0 ; k<2 ; k++){
                array[i][j][k] = ++n;
            }
        }
    }
    printf("\n");
    for(i=0 ; i<2 ;i++){
        for(j=0 ; j<3 ;j++){
            for(k =0 ; k<2 ; k++){
                printf("%d ",array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

}