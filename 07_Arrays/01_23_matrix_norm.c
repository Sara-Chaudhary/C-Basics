// The norm is defined as the square root of the sum of squares of all elements in the matrix.
// use -lm at end of gcc statement to run without error.
#include<stdio.h>
#include<math.h>
double Norm(int *arr);
int main(){
    int array[]={2,2,2,2,2,2,2,2,2};
    printf("\nOriginal Array: ");
    for(int i=0 ; i<9 ;i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    int norm = Norm(&array[0]);
    printf("The norm of the matrix is %d .\n", norm);
    return 0;
}
double Norm(int *arr){
    int sum =0;
    for(int i=0 ;i<9 ;i++){
        sum = sum + arr[i] * arr[i];
    }
    double sqr = sqrt(sum);
    return(sqr);
}