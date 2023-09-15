#include<stdio.h>
int Deci_Equi(int n);
int main(){
    int n , dec;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    dec = Deci_Equi(n);
    printf("The Decimal Equivalent of %d is : %d\n\n", n , dec);
    return 0;
}

int Deci_Equi(int n){
    int bi=0 , ten = 1 , temp = n ;
    for(int i = 1 ; temp > 0 ; i++){
        bi = bi + (temp % 2) * ten ;
        temp = temp / 2;
        ten = ten * 10 ;
    }
    return bi + (temp % 8) * ten ;
}    