#include<stdio.h>
#include<string.h>
void Vowel_count(char *str);
int main(){
    char str[80];
    printf("Enter a sentence:");
    scanf("%[^\n]", str);
    printf("\nYou entered  :  %s\n", str);
    Vowel_count(str);
    return 0;
}
void Vowel_count(char *str){
    int count = 0;
    for(int i=0 ; str[i] != '\0' ; i++){
        if((str[i] == 'a' || str[i] == 'e' || str[i]=='i' || str[i]=='o'|| str[i]=='u' )&& (str[i+1] == 'a' || str[i+1] == 'e' || str[i+1]=='i' || str[i+1]=='o'|| str[i+1]=='u')){
            count++;
        }
    }
    printf("\nConsequetive vowel comes %d times in the sentence.\n", count);
}