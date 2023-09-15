#include <stdio.h>

typedef struct complex
{
    int a;
    int b;
} complex;

void display(complex *n);

int main()
{
    complex num[6];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter the real com. of complex number %d: ", i+1);
        scanf("%d", &num[i].a);
        printf("Enter the imaginary com. of complex number %d: ", i+1);
        scanf("%d", &num[i].b);
    }
    // sending address of first comlex number of array.
    display(&num[0]);
    return 0;
}

void display(complex *n)
{
    for (int i = 0; i < 2; i++)
    {   // printing object one by one . 
        printf("The complex number %d is %d + i%d .\n", i+1, (*n).a, (*n).b);
        n++;
    }
}