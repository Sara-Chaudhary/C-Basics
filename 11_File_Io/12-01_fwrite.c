// program to write data into students in binary file.
#include <stdio.h>
// making a structure student
typedef struct student
{
    int rollno, yearofbirth;
    char name[20];
} std;

int main()
{
    std student[3]; // an array of structure students.
    FILE *fp;
    fp = fopen("textfiles/Student_Record.dat", "ab"); // opening of a file to add more record to the previous ones.
    // Inputting the records of students .
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", student[i].name);
        printf("Enter the roll no. of student %d: ", i + 1);
        scanf("%d", &student[i].rollno);
        printf("Enter the year of birth of student %d: ", i + 1);
        scanf("%d", &student[i].yearofbirth);
    }
    fwrite(&student[0], sizeof(std), 3, fp);
    printf("\nThe data is added to Student_Record.dat .\n");
    fclose(fp);
    return 0;
}