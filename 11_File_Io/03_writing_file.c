#include<stdio.h>
int main(){
    FILE *ptr;
    int n =12345;
    ptr = fopen("sample2.txt","w");
    fprintf(ptr,"The number used in this particular file is :%d  \n", n);
    fprintf(ptr,"The number used in this particular file is");
    fclose(ptr);
    return 0;
}