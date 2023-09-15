#include<stdio.h>
#include<math.h>

float sinx(float x);
int fac(int n);
int main(){
    float num , s;
    printf("You want the sin of: ");
    scanf("%f" , &num);
    s = sinx(num);
    printf("%0.1f \n", s);

    return 0;
}
int fac(int n){
    if(n == 1){
        return 1;
    } else {
        return n * fac(n-1);
    }
}
float sinx(float x){
    float sin = 0;
    for(int i = 1 ; i<= 5 ; i = i+2){
        sin = -1 * sin + ( pow(x,i) / fac(i)) ;
    } 
    return sin ;
}