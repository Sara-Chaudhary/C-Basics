#include<stdio.h>
#include<stdlib.h>

int main(){
    int n ,i, *table;

    // inputting number of which the table is to be made
    printf("\nYou want the table of number : ");
    scanf("%d", &n);

    // allocating space and storing the  multiplicative table of number
    table = (int *) calloc(10 , sizeof(int));
    for(i=0 ; i<10 ; i++){
        table[i] = n * (i+1);
    }

    // printing the table
    printf("\nThe table of %d is: \n", n);
    for(i=1 ; i<=10 ; i++){
        printf("%2d X %2d = %3d\n", n , i , table[i-1]);
    }

    // reallocating to add more numbers
    table = realloc(table , 15 * sizeof(int));
     for(i=0 ; i<15 ; i++){
        table[i] = n * (i+1);
    }

    // printing the new table
    printf("\nAfter reallocation :\n");
    for(i=1 ; i<=15 ; i++){
        printf("%2d  X  %2d = %3d\n", n , i , table[i-1]);
    }
    printf("\n");
    return 0;
}