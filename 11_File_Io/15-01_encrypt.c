// programme to encrypt a programme. 
#include<stdio.h>

void encrypt(char *str); // function to encrypt the text

int main(){
    char file[150];
    FILE *ptr;

    // opening a file and reading the data and closing after done.
    ptr = fopen("textfiles/test_text.txt","r");
    fread(&file[0], 1, 150 , ptr);
    fclose(ptr);
    encrypt(&file[0]);

    // file to store the encrypted data to be read by the decrypter.
    ptr =fopen("textfiles/encrypt.txt", "w");
    fprintf(ptr,"%s", file);
    fclose(ptr);

    // file where the final data will be printed
    ptr =fopen("textfiles/text.txt", "a");
    fprintf(ptr,"\nEncrypted Form:\n%s", file);
    fclose(ptr);

    //programme successful run confirmation text
    printf("The text is encrypted .\nSafely stored in encrypt.txt\n");
    return 0;
}
void encrypt(char *str){
    while(*str != '\0'){
        *str = *str+8 ;
        str++;       
    }
}