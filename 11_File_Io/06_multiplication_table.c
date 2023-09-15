// to print a multiplication table of the number input by the user.
#include <stdio.h>
                            
int main()
{
    int n, i;
    FILE *ptr;
    ptr = fopen("Table.txt", "w");
    printf("\nWrite a number:");
    scanf("%d", &n);
    printf("The multiplication table of %d is printed in the \"Table.txt\" file .\n\n", n);
    fprintf(ptr, "The table of %d is :\n", n);
    for (i = 1; i <= 10; i++)
    {
        fprintf(ptr, " %d X %d = %d\n", n, i, n * i);
    }
    fclose(ptr);
    return 0;
}