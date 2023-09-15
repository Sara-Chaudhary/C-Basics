#include <stdio.h>
#include <math.h>
void Largest(double *arr);
int main()
{
    int i, j;
    double area[6];
    double array[6][3] = {13.7, 80, 0.78,
                          155.2, 92.62, 0.89,
                          149.3, 97.93, 1.35,
                          160.0, 100.25, 9.0,
                          155.6, 68.95, 1.25,
                          149.7, 120.0, 1.75};
    for (i = 0; i < 6; i++)
    {
        area[i] =  (1 / 2) * (array[i][0]) * (array[i][1]) * (sin(array[i][2]));
    }
    for (i = 0; i < 6; i++)
    {
        printf("\nThe area of %d land is : %0.1lf \n", (i + 1), area[i]);
    }
    Largest(&area[0]);
    return 0;
}
void Largest(double *arr)
{
    int l = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > l)
        {
            l = arr[i];
        }
    }
    printf("\nThe largest area is : %d\n", l);
}