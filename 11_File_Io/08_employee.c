// programme to print in a file the data of employees taken as input .

#include<stdio.h>
typedef struct employee{
    int id , salary;
    char name[20];
}emp;
int main(){
    emp  w[3];
    // taking the data of employee .
    for(int i=0 ; i<3 ; i++){
        printf("\nEnter the employee name: ");
        scanf("%s", w[i].name);
        printf("Enter the employee id: ");
        scanf("%d", &w[i].id);
        printf("Enter the salary :");
        scanf("%d", &w[i].salary);
    }
    // printing the value in file while opening and closing .
    FILE *ptr;
    ptr = fopen("textfiles/Employee.ods", "w");
    fprintf(ptr,"ID\tName\tSalary\n");
    for(int i=0;i<3;i++){
        fprintf(ptr,"%d\t%s\t%d\n", w[i].id, w[i].name, w[i].salary);
    }
    fclose(ptr);
    // comfirmation statement.
    printf("\nAll data is stored in the file \"Employee.txt\" in the \"textfiles\" folder .\n\n");
    return 0;
}