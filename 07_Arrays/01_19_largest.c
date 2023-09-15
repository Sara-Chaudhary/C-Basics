#include<stdio.h>
int main(){
    int array[5][5];
    for(int i =0 , n =1 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++ , n++){
            array[i][j]= n*i*j;
        }
    }
   int l = 0 ;
    for(int i =0 , n =0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            if(array[i][j] > l){
                l = array[i][j];
            }
        }
    }
    printf("The Largest number in the following matrix is %d .\n\n", l);
    return 0;
}