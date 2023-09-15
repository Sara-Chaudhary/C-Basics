#include<stdio.h>
#include<string.h>

struct employee{
    char name[20];
    int code;
    float salary ;
};
int main(){
    struct employee e[5];
    for(int i=1 ;i<=3 ;i++){
        printf("Enter the name of employee %d: ", i);
        scanf("%s", e[i].name);
        printf("Enter the code for employee %d: ", i);
        scanf("%d", &e[i].code);
        printf("Enter the salary of employee %d: ", i);
        scanf("%f", &e[i].salary);
    }
    for(int i=1 ;i<=3 ;i++){
        printf("The code, name, salary of employee 1 is: %d , %s,  %f \n", e[i].code , e[i].name , e[i].salary );
    }
    return 0;
}