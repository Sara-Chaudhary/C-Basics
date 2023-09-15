#include <stdio.h>
int main()
{
    int num[] = {24, 34, 12, 44, 56, 17};
    int *j = &num[0];
    int i;
    for (i = 0; i <= 5; i++)
    {
        printf("\naddress = %u ", &num[i]);
        printf("element = %u",*j);
        j++;
    }
    printf("\n");
    return 0;
}