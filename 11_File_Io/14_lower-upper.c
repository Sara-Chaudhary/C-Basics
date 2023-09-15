// programme to read a file and append it to another while all its lowercase alphabets turn to uppercase
#include<stdio.h>

void lower_upper(char *str);
int main(){
    char file[150];
    FILE *ptr;
    // opening a file and reading the data and closing after done.
    ptr = fopen("textfiles/sample2.txt","r");
    fread(&file[0], 1, 150 , ptr);
    fclose(ptr);
    lower_upper(&file[0]);
    // open the file to which data is to be added in the same pointer (saving memory).
    ptr =fopen("textfiles/duplicate.txt", "a");
    fprintf(ptr,"\n%s", file);
    fclose(ptr);
    //confirmation that the work is done.
    printf("The data is added to the file duplicate.txt.\n");
    return 0;
}
void lower_upper(char *str){
    while(*str != '\0'){
        if(*str >=97 && *str <=122){
            *str = *str-32 ;
            str++;
        } else {
            str++;
        }
    }
}