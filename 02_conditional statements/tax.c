#include<stdio.h>

int main(){
    int salary ;
    printf("Enter your salary : ");
    scanf("%d" ,&salary);

    if(salary<250000){
        printf("No Tax");
    }
    else if(salary > 250000 && salary <= 500000){
        printf("tax applied is 5 percent \n");
        printf("so tax amount is %f \n", (salary - 250000) * 0.05);
    }
    else if(salary > 500000 && salary <= 1000000){
        printf("tax applied is 20 percent\n");
        printf("so tax amount is %f \n", (salary - 500000)* 0.2);
    }
    else if(salary > 1000000){
        printf("tax applied is 30 percent \n");
        printf("so tax amount is %f \n", (salary - 1000000) * 0.3);
    }

    return 0;
}

