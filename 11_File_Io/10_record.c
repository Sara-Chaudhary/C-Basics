#include <stdio.h>
#include <stdlib.h>

typedef struct employee{
    char name[20];
    int age;
    float bs;
} emp;

int main()
{
    char another = 'Y';
    FILE *ptr, *fp;
    ptr = fopen("textfiles/EMP.dat", "ab+");
    emp e;
    while (another != 'N' || another != 'n')
    {
        printf("\nEnter name, age and basic salary: ");
        scanf("%s %d %f", e.name, &e.age, &e.bs);
        fwrite(&e, sizeof(e), 1, ptr);
        printf("Add another record (Y/N) ");
        scanf(" %c", &another);
    }
    fclose(ptr);
    // fp = fopen("textfiles/EMP.txt", "rb");
    // while (fread(&e, sizeof(e), 1, fp) == 1)
    //     printf("\n%s %d %f", e.name, e.age, e.bs);
    // fclose(fp);
    return 0;
}