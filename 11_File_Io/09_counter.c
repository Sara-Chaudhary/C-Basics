/* Count chars, spaces, tabs and newlines in a file */

#include<stdio.h>

int main(){
    FILE *fp;
    char ch;
    int nol = 1, nob = 0, noc = 0;
    fp = fopen("textfiles/sample2.txt", "r");
    while (1){
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        noc++;
        if (ch == ' ')
            nob++;
        if (ch == '\n')
            nol++;
    }
    fclose(fp);
    printf("\nNumber of characters = %d", noc);
    printf("\nNumber of blanks = %d", nob);
    printf("\nNumber of lines = %d\n\n", nol);
    return 0;
}