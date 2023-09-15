#include<stdio.h>
void slicer(char *st , int m ,int n);
int main(){
    char str[] ="Swarnim";
    slicer( str,2 , 6);
    printf("%s\n",str);
    return 0;
}
void slicer(char *st ,int m , int n){
    int i;
    for( i=0 ; (m+i) < n ; i++){
        st[i] = st[i+m];
    }
    st[i]='\0';
}
