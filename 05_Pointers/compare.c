#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 36, 72, 45, 36};
    int *j, *k;
    j = &arr[2];
    k = (arr + 2);
    if (j == k)
        printf("\nThe two pointers point to the same location\n %d , %d\n", *j , *k);
    else
        printf("\nThe two pointers do not point to the same location\n%d , %d\n", *j , *k);
    return 0;
}