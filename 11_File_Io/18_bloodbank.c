#include<stdio.h>
typedef struct blooddonor{
    char name[20] , type[2] ;
    int age ;
}donor;
int main(){
    FILE *ptr;
    donor  dnr[3];
    int n = 3 , i =0;
    char bg[2];
    printf("How many donors are there: ");
    scanf("%d", &n);
    // taking donor info as input
    for (int i =0; i<n ; i++){
        printf("\nEnter name: ");
        scanf("%s", dnr[i].name);
        printf("Enter age: ");
        scanf("%d", &dnr[i].age);
        printf("Enter the blood type: ");
        scanf("%s", dnr[i].type);
    }
    // open file to store the data.
    ptr = fopen("textfiles/donorlist.ods","w");
    for (int i =0; i<n ; i++){
        fprintf(ptr ,"%s \t %d \t %s \n", dnr[i].name , dnr[i].age , dnr[i].type );
    }
    fclose(ptr);
    //opening file to check blood type and print donor info.
    ptr = fopen("textfiles/donorlist.ods", "r");

    for (int i =0; i< n ; i++){
        fscanf(ptr,"%s", dnr[i].name);
        fscanf(ptr,"%d", &dnr[i].age);
        fscanf(ptr,"%s", dnr[i].type );
    } 
    fclose(ptr);
    for (int i =0; i<n ; i++){
        printf("\t%s \t%d  \t %s \n", dnr[i].name , dnr[i].age , dnr[i].type );
    }   
    return 0;
}