#include<stdio.h>
#include<math.h>
void Distance(int *arr_x , int *arr_y);
int main(){
    int x[10] , y[10] ,i ,j ;
    printf("\n");
    for(i=0 ;i<10 ;i++){
        printf("Enter the value of x coordinate: ");
        scanf("%d", &x[i]);
        printf("Enter the y coordinte: ");
        scanf("%d", &y[i]);
    }
    Distance(&x[0] ,&y[0]);
    return 0;
}
void Distance(int *arr_x , int *arr_y){
    int sum =0 , d;
    for(int i=0 ; i<9 ;i++){
        d = sqrt( pow( (arr_x[i+1] - arr_x[i]) , 2 ) + pow( (arr_y[i+1] - arr_y[i]) , 2 ) );
        sum = sum + d ;
    }
    printf("\nThe distance between the first and last point is : %d\n\n", sum);
}