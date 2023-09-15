#include<stdio.h>
int main(){
    int num ,i;
    int Table[10];
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("The table of %d :\n", num);
    for(i = 1 ; i<=10 ; i++){
        Table[i-1] = num * i;
    }    
    for(i = 0 ; i<=9 ; i++){
        printf("%d\n", Table[i]);
    }
    printf("\n\n");
    return 0;
}