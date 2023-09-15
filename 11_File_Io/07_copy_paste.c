// programme to copy info from a file and duplicting it twice in another file . Also using file path.
#include<stdio.h>

int main(){
    int i ;
    char ch;
    FILE *a , *b;    
    b = fopen("textfiles/duplicate.txt","w"); // for giving path to a file name " folder_name/file_name ". No slash at start.
    for(i=0 ;i<2;i++){
        a = fopen("textfiles/sample2.txt", "r");
        ch = fgetc(a);
        while(ch != EOF){
            fprintf(b , "%c", ch);  
            ch = fgetc(a);      
        }
        fprintf(b ,"\n");
        fclose(a);
    }
    fclose(b);
    return 0;    
}