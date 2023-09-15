#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *ptr;
    int n ,i, *table;
    printf("\nYou want the table of number : ");
    scanf("%d", &n);
    table = (int *) malloc(10 * sizeof(int));
    for(i=0 ; i<10 ; i++){
        table[i] = n * (i+1);
    }
    ptr = fopen("dynamic.txt","w");
    fprintf(ptr ,"The table of %d is: \n", n);
    for(i=1 ; i<=10 ; i++){
        fprintf(ptr,"%2d  X %2d = %3d\n", n , i , table[i-1]);
    }
    table = realloc(table , 15 * sizeof(int));
     for(i=0 ; i<15 ; i++){
        table[i] = n * (i+1);
    }
    fprintf(ptr,"<><><><><><><><><><><>\nAfter reallocation :\n");
    for(i=1 ; i<=15 ; i++){
        fprintf(ptr,"%2d  X  %2d = %3d\n", n , i , table[i-1]);
    }
    fprintf(ptr,"<><><><><><><><><><><>");
    fclose(ptr);
    printf("The table is printed in the file dynamic.txt.\n\n");
    return 0;
}