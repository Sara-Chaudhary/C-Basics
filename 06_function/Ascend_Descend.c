#include<stdio.h>
void Ascend(int n);
int Descend(int n);
int main(){
    int num ;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    //Ascend(num);
    Descend(num);
    printf("\n\n");
    return 0;
}
void Ascend(int n){
    int i = 1 ;
    if(i == n){
        printf("%d ", n);
        //Descend(n);
    }else{
        printf("%d  ", i++);
        Ascend(i+1);
    }
}
int Descend(int n){
    if(n == 1){
        return 1;
    } else {
        int s = Descend(n-1);
        printf("%d ", s);
    }
}