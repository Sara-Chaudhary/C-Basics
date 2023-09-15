#include<stdio.h>
void decrypt(char *str); // function to decrypt the text
int main(){
    char file[150];
    FILE *ptr;
    // opening a file and reading the encrypted data and closing after done.
    ptr = fopen("textfiles/encrypt.txt","r");
    fread(&file[0], 1, 150 , ptr);
    fclose(ptr);
    decrypt(&file[0]);
    // opening another file where the data will be printd
    ptr =fopen("textfiles/text.txt", "a");
    fprintf(ptr,"\n\nDecrypted form:\n%s", file);
    fclose(ptr);
    printf("The text is decrypted .\n");
    return 0;
}
void decrypt(char *str){
    while(*str != '\0'){
        *str = *str-8 ;
        str++;       
    }
}