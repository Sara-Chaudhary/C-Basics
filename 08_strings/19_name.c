#include<stdio.h>
void lower_upper(char *ch);
int main(){
    char fname[20] , mname[20] , lname[30];
    printf("Enter your first name: ");
    scanf("%c", fname);
    
    printf("Enter your middle name: ");
    scanf("%s", mname);
    
    printf("\nEnter your last name: ");
    scanf("%s", lname);
    lower_upper(fname);
    lower_upper(mname);
    lower_upper(lname);
    printf("Hello !\n%c.%c.%s \n", fname[0] , mname[0] ,lname);
}
void lower_upper(char *ch){
    if(*ch >= 97 && *ch <=122){
        *ch = *ch-32;
    }       
}