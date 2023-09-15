#include<stdio.h>
void The_del(char *str){
    for(int i=0 ; i<180 ; i++){
        if(str[i] == 'T' || str[i] == 't' && str[i+1]=='h' || str[i+1]=='H'&& str[i+2]=='e' || str[i+2] == 'E'){
            str[i]= ' ';
            str[i+1]=' ';
            str[i+2]=' ';
        }
    }
}
void Vowel_del(char *str){
    for(int i=0 ; i<180 ; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i]=='i' || str[i]=='o'|| str[i]=='u' || str[i] == 'A' || str[i] == 'E' || str[i]=='I' || str[i]=='O'|| str[i]=='U'){
            str[i]= ' ';
        }
    }
}
int main(){
    FILE *ptr ;
    char str[180];
    ptr = fopen("textfiles/test_text.txt", "r");
    fscanf(ptr ,"%c", &str[0]);
    for(int i=1 ; str[i] != EOF ; i++){
        fscanf(ptr ,"%c", &str[i]);
    }
    fclose(ptr);
    The_del(&str[0]);
    Vowel_del(&str[0]);
    ptr = fopen("textfiles/test_text.txt","a");
    fprintf(ptr,"\n");
    for(int i=0 ; str[i] != '\0' ; i++){
        fprintf(ptr ,"%c", str[i]);
    }
    fclose(ptr);
    return 0;
}