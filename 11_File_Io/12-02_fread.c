// programme to read and print the data from a binary file.
#include<stdio.h>
//declaring th structure students.
typedef struct student{
    int rollno , yearofbirth ;
    char name[20]; 
}std;

int main(){
    std students[6];
    FILE *ptr;
    // opening and reading the file .
    ptr = fopen("textfiles/Student_Record.dat","rb");
    fread(&students[0],sizeof(std), 6, ptr);
    fclose(ptr);    // closed the file when the data was read and taken to clear the buffer.
    // starting a loop to print out the array that stores data now.
    for(int i=0 ; i<6 ;i++){   
        printf("\nName of student %d is: %s\n", i+1 , students[i].name);
        printf("Roll no. of student %d is: %d\n", i+1 , students[i].rollno);
        printf("Year of birth of student %d is: %d\n", i+1, students[i].yearofbirth);
    }

    printf("\nThat was the end of the records.\n\n");
    return 0;
}