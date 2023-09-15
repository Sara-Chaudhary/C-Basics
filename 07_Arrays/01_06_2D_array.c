#include <stdio.h>
void print(int q[][4], int row, int col);
void main(){
    int a[][4] = {
        1, 2, 3, 4,
        5, 6, 7, 8,
        9, 0, 1, 6};
    print(a, 3, 4);
}

void print(int q[][4], int row, int col){
    int i, j;
    printf("\n");
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            printf("%d ", q[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}