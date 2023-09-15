#include<stdio.h>
void decrypt(char *str);
void encrypt(char *str);
int main(){
    char str[]= "Hello This is Sara. ";
    encrypt(&str[0]);
    printf("\nCoded string is :     \" %s \"", str);
    decrypt(&str[0]) ;
    printf("\nDecodedted string is :\" %s \" \n\n", str);
    return 0;
}
void decrypt(char *str){
    for(int i=0 ; str[i] != '\0'; i++){
        str[i] = str[i]-1;
    }
}
void encrypt(char *str){
    for(int i=0 ; str[i] != '\0'; i++){
        str[i] = str[i]+1;
    }
}