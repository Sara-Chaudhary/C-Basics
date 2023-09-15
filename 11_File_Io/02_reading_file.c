#include<stdio.h>

int main(){
    FILE *ptr ;
    int n , n2 ;
    ptr = fopen("textfiles/sample.txt","r");
    fscanf(ptr, "%d", &n);
    fscanf(ptr, "%d", &n2);
    fclose(ptr);
    printf("%d\n%d\n", n, n2);
    return 0;
}