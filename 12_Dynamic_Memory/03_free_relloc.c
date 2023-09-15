#include <stdio.h>
#include <stdlib.h>

// defining a structure student with two varibles.
typedef struct student{
    int rollno;
    char name[20];
} std;

int main(){
    int n, a;
    std *ptr;
    // taking limit for memory allocation from user.
    printf("\nEnter the number of students in class: ");
    scanf("%d", &n);

    // using calloc to allocate 'n' number of spaces in memory of size of structure student .
    ptr = (std *)calloc(n, sizeof(std));
    printf("\n");

    // taking values input
    for (int i = 0; i < n; i++){
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", ptr[i].name);
        ptr[i].rollno = i + 1;
    }

    // asking to enter the of any student
    printf("\nEnter the roll no of the student you want the name of: ");
    scanf("%d", &a);

    // checking if the roll no is valid
    if (a > n){
        printf("\nNo result found.\nKindly check the roll no again .\nThe last roll no in this list of students is %d\n", n);
    } else {
        // printing the name of the desired student
        for (int i = 0; i < n; i++){
            if (ptr[i].rollno == a){
                printf("\nThe name of student %d is: %s .\n", ptr[i].rollno, ptr[i].name);
            }
        }
    }
    // delocating the values
    free(ptr);

    // reallocating the values.
    ptr = realloc(ptr, (n * 2) * sizeof(std));
    for (int i = 0; i < (n + 3); i++){
        ptr[i].rollno = n + i - 1;
    }

    // printing the new values.
    printf("\nAfter rellocation : \n");
    for (int i = 0; i < (n * 2); i++){
        printf("The roll no. of student %d is: %d .\n", i + 1, ptr[i].rollno);
    }
    printf("\n");
    return 0;
}