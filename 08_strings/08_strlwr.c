#include<stdio.h>
#include<string.h>
int main(){
    char a[]="hello this is a test string.";
    strupr(a);
    printf("\n %s \n", a);
    strlwr(a);
    printf("\n %s \n", a);
    return 0;
}
