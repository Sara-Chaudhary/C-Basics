#include <stdio.h>

typedef struct date{
    int d, m, y;
}date;
typedef struct employee{
    char empcode[6];
    char empname[20];
    struct date join_date;
    float salary;
}emp;
int main(){
    emp num[2] , temp;
    int i;
    for (i=0 ;i<2;i++){
        printf("\nEnter name of employee %d: ", i+1);
        scanf("%s", num[i].empname);
        printf("Enter code of employee %d: ", i+1);
        scanf("%s", num[i].empcode);
        printf("Enter date of joining of employee %d(dd mm yy): ", i+1);
        scanf("%d %d %d", &num[i].join_date.d ,&num[i].join_date.m , &num[i].join_date.y);
        printf("Enter salary of employee %d: ", i+1);
        scanf("%f", &num[i].salary);
    }
    for(i=0 ; i<1 ;i++){
        if(num[i].join_date.y > num[i+1].join_date.y){
            temp = num[i];
            num[i] = num[i+1];
            num[i+1]= temp;
        }
    }
    FILE *ptr;
    ptr = fopen("textfiles/data.txt","w");
    fprintf(ptr ,"Name \tCode \tsalary \tD.O.J\n");
    for(i=0 ;i<2 ;i++){
         fprintf(ptr ,"%4s \t%4s \t%0.1f \t%2d%2d%2d\n", num[i].empname , num[i].empcode , num[i].salary, num[i].join_date.d, num[i].join_date.m, num[i].join_date.y);
    }
    fclose(ptr);

    return 0;
}