// make our own version of strln .
#include<stdio.h>
int main(){
    int i ,space=0 ;
    char str[70] ="Also if you like and share this video";
    for(i =0 ; str[i]!='\0' ; i++){
        if(str[i]==' '){
            space++;
        }
    }
    printf("\nThe number of total characters in the string are: %d.", i);
    printf("\nThe number of alhabets in the string are: %d.\n", i-space);
    return 0;
}