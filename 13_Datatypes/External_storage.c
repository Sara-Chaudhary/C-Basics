#include<stdio.h>
int i = 1;

void Increment();
void Decrement();
void main(){
    printf("\nvalue of i : %d", i);
    Increment();
    Increment();
    printf("\nOn Increment : %d", i);
    Decrement();
    printf("\nOn Decrement : %d \n\n", i);
}
void Increment(){
    i++;
}
void Decrement(){
    i--;
}