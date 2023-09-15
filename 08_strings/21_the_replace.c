#include<stdio.h>
#include<string.h>
void The_del(char *str);
int main(){
    char str[80];
    printf("Enter a sentence:");
    scanf("%[^\n]", str);
    printf("\nYou entered  :  %s\n", str);
    The_del(str);
    printf("Changed String: %s\n", str);
    return 0;
}
void The_del(char *str){
    for(int i=0 ; i<80 ; i++){
        if(str[i] == 'T' || str[i] == 't' && str[i+1]=='h' || str[i+1]=='H'&& str[i+2]=='e' || str[i+2] == 'E'){
            str[i]= ' ';
            str[i+1]=' ';
            str[i+2]=' ';
        }
    }
}