#include <stdio.h>

typedef struct employee
{
    int joining_date[20];
    char name[20];
} emp;
void value(emp *n);
int main()
{
    int date;
    emp n[3];
    value(&n[0]);
    printf("Enter year(yy): ");
    scanf("%d", &date);
    for (int i = 0, j = 0; i < 3; i++)
    {
        if ((date) - *(n->joining_date) >= 3)
        {
            printf("%d. %s\n", j++, n->name);
        }
    }
    return 0;
}
void value(emp *n){
    for(int i=0 ; i<3 ;i++){
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", n->name);
        printf("Enter the year of joining of student %d: ", i + 1);
        scanf("%d", n->joining_date);
    }
}
