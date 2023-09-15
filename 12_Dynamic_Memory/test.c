#include<stdio.h>
#include<stdlib.h>

int main(){
    int * ptr;
    ptr = (int *) malloc(150*sizeof(int));
    for(int i=0 ; i<150 ;i++){
        printf("%d\t", ptr[i]);
    }
    return 0;
}