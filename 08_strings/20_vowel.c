#include<stdio.h>
#include<string.h>
void Vowel_del(char *str);
int main(){
    char str[80];
    printf("Enter a sentence:");
    scanf("%[^\n]", str);
    printf("\nYou entered  :  %s\n", str);
    Vowel_del(str);
    printf("Changed String: %s\n", str);
    return 0;
}
void Vowel_del(char *str){
    for(int i=0 ; i<80 ; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i]=='i' || str[i]=='o'|| str[i]=='u' || str[i] == 'A' || str[i] == 'E' || str[i]=='I' || str[i]=='O'|| str[i]=='U'){
            str[i]= ' ';
        }
    }
}