#include <stdio.h>
#include <string.h>
int main(){
    char *s[] = {
        "To err is human...",
        "But to really mess things up...",
        "One needs to know C!!"};
    for(int i=0 ; i<3 ;i++){
        strrev(s);
    }
    printf("%s", *s);
    return 0;
}