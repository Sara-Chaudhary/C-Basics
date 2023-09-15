#include<stdio.h>

int main(){
    FILE *ptr , *a;
    ptr = fopen("sample2.txt","r");
    char c = fgetc(ptr); // reads a file character by character.
    printf("%c\n", c);
    fclose(ptr);

    a = fopen("new.txt","w");
    putc('H',a);  // prints character by character in the file .
    fclose(a);    //  tell compiler to close file to save memory.
    return 0;
}