#include<stdio.h>
void Shift(int*a, int*b, int*c);
int main(){
    int x,y,z;
    printf("\nx: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("z: ");
    scanf("%d", &z);
    Shift(&x ,&y ,&z);
    printf("\nAfter shift.\n\nx=%d\ny=%d\nz=%d\n\n", x,y,z);
    return 0;
}
void Shift(int*a, int*b, int*c){
    int temp = *c;
    *c = *b ;
    *b = *a; 
    *a = temp ;
}