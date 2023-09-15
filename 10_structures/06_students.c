#include <stdio.h>

typedef struct student_data {
    int rollno, year_join;
    char name[20], course[20], department[30];
} std;

void display(std *n, char *name1);  // print all the information about a student when name is taken input
void Value(std *n);                 // to get all the value input from user
void Checkprint(std *a, int n);     // to check the number of students froma particular year of joining and printing their name  

int main()
{
    int year;
    char *name[1];
    std student[4];
    Value(&student[0]);
    printf("\nEnter the year you want the joinees of : ");
    scanf("%d", &year);
    Checkprint(&student[0], year);
    printf("\nEnter the name of the student you want the data about: ");
    scanf("%s", name[0]);
    display(&student[0], name[0]);
    return 0;
}

void Value(std *n)
{
    for (int i = 0; i < 2; i++)
    {
        printf("\nEnter the Roll no. of student %d: ", i + 1);
        scanf("%d", &n->rollno);
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", n->name);
        printf("Enter the year of joining of student %d: ", i + 1);
        scanf("%d", &n->year_join);
        printf("Enter the course of student %d: ", i + 1);
        scanf("%s", n->course);
        printf("Enter the department of student %d: ", i + 1);
        scanf("%s", n->department);
        n++;
    }
}

void display(std *n, char *name1)
{
    for (int i = 0; i < 2; i++)
    {
        if (n->name == name1)
        {
            printf("For student: %s\nroll no: %d\nCourse: %s\nDepartment: %s\nYear of joining: %d\n\n", n->name, n->rollno, n->course, n->department, n->year_join);
            n++;
        }
    }
}

void Checkprint(std *a, int n)
{
    for (int i = 0, j = 1; i < 2; i++)
    {
        if (a->year_join == n)
        {
            printf("%d. %s \n", j, a->name);
            a++;
        }
    }
}