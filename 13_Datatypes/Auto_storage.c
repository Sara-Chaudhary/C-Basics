#include<stdio.h>
void Increment();
void main(){
    Increment();
    Increment();
}
void Increment(){
    auto int i = 1;
    printf("\n%d\n\n", i);
    i++;
}