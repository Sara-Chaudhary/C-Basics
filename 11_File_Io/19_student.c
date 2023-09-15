#include<stdio.h>
typedef struct student{
    int roll_no ;
    char name[20];
}student;

int main(){
    FILE *ptr ;
    int n;
    student std[10];
    for (int i=0 ;i<10 ;i++){
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", std[i].name);
        std[i].roll_no = i+1;
    } 
    ptr = fopen("textfiles/student.dat","wb");
    fwrite(&std[0], sizeof(std), 10, ptr);
    fclose(ptr);
    printf("\nEnter the roll no. of student you want to find: ");
    scanf("%d",&n);
    ptr = fopen("textfiles/student.dat", "rb");
    fread(&std[0], sizeof(std), 10, ptr);
    fclose(ptr);
    for(int i=0 ; i<10 ;i++){
        if(std[i].roll_no == n){
            printf("The student with roll no %d is : %s\n\n",n,std[i].name );
        } else {
            continue;
        }
    }
    printf("\nList of students with name starting with s: \n");
    for(int i=0 ; i<10 ;i++){
        if(std[i].name[0] == 's'){
            printf("%d. %s\n", std[i].roll_no ,std[i].name);
        }
    }
    return 0;
}