#include<stdio.h>
#include<math.h>
float sum(float *arr);
float Product(float *a ,float *b);
int main(){
    float x[5]={ 34.22, 39.87, 41.85, 43.23, 40.06};
    float y[5]={102.43, 100.93, 97.43, 97.41, 98.32};
    float n =(Product(&x[0] , &y[0]))-((sum(&x[0]))*(sum(&y[0])));
    float d =(sqrt(((5*(Product(&x[0],&x[0])))- pow(sum(&x[0]),2))*((5*(Product(&y[0],&y[0])))- pow(sum(&y[0]),2))));
    printf("\n%0.01f\n\n", n/d);
    return 0;
}
float sum(float *arr){
    float s = 0;
    for(int i=0;i<5;i++){
        s = s + arr[i];
    }
    return s;
}
float Product(float *a ,float *b){
    float s=0;
    for(int i=0 ; i<5 ; i++){
        s = s + (a[i]) * (b[i]);
    }
    return s;
}
