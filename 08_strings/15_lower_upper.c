#include<stdio.h>
void lower_upper(char *st);
int main(){
    char lower[50];
    printf("Enter a string: ");
    gets(lower);
    lower_upper(&lower[0]);
    printf("\n%s\n", lower);
    return 0;
}
void lower_upper(char *str){
    for(int i=0 ; str[i] != '\0'; i++){
        if(str[i]>= 97 && str[i]<=122){
            str[i] = str[i]-32;
        }
        
    }
}