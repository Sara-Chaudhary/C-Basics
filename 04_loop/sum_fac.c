#include <stdio.h>

int main(){  
    int fac = 1; float sum = 0;
    for(int i = 1 ; i <= 30 ; i++){
        fac= fac * i;
        sum = sum + (i / fac) ;
    }
    printf("%f \n", sum);

    return 0;
}
