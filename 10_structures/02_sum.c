#include<stdio.h>
typedef struct vector {
    int x , y ;
}vector;
void sum(vector a , vector b);
int main(){
    vector num[3];
    for(int i=1 ; i<=2 ; i++){
        printf("Enter the x com. of vector %d: ", i);
        scanf("%d", &num[i].x);
        printf("Enter the y com. of vector %d: ", i);
        scanf("%d", &num[i].y);
    }
    sum(num[1], num[2]);
    return 0;
} 
void sum(vector a, vector b){
    printf("The sum of both the vectors is: (%d,%d) \n" , a.x + b.x , a.y + b.y);
}