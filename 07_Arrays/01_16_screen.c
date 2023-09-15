#include<stdio.h>
int main(){
    int array[25][80];
    for(int i =0 ; i<=24 ; i++){
        printf("\n");
        for(int j =0 ; j<79 ; j++){
            printf("><");
        }        
    }
    return 0;
}