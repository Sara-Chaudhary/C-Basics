#include<stdio.h>
typedef struct employee{
    int empno , age , salry;
    char name[20];
}employee;
int main(){
    int count =0;
    FILE *ptr ;
    employee emp[5];
    for (int i=0 ; i<5 ; i++){
        printf("\nEnter the name of Employee %d: ", i+1);
        scanf("%s", emp[i].name);
        printf("Enter the age of Employee %d: ", i+1);
        scanf("%d", &emp[i].age);
        printf("Enter the employee number of Employee %d: ", i+1);
        scanf("%d", &emp[i].empno);
        printf("Enter the salary of Employee %d: ", i+1);
        scanf("%d", &emp[i].salry);
    }
    ptr = fopen("textfiles/emp.txt", "w");
    fwrite(&emp[0], sizeof(emp), 5 ,ptr);
    fclose(ptr);
    
    ptr = fopen("textfiles/emp.txt", "r");
    fread(&emp[0], sizeof(emp), 5 ,ptr);
    fclose(ptr);
    for (int i=0 ;i<4 ; i++){
        if(emp[i].empno != (emp[i+1].empno-1)){
            printf("\nAn id is missing btw %d and %d .\n", emp[i].empno , emp[i+1].empno);
            count++;
        }
    }
    printf("There are a total of %d id missing\n", count);
    return 0; 
}