#include <stdio.h>
#include <math.h> // to avoid getting error while using pow and sqrt compile manually in teminal and add (-lm) at end .

float Distance(int x1, int x2, int y1, int y2);
float Area(float a, float b, float c);

int main()
{
    int a1, a2, b1, b2, c1, c2;
    printf("\nEnter the coordinates of A: \n");
    scanf("%d %d", &a1, &a2);
    printf("Enter the coordinates of B: \n");
    scanf("%d %d", &b1, &b2);
    printf("Enter the coordinates of C: \n");
    scanf("%d %d", &c1, &c2);
    float a = Distance(a1, a2, b1, b2);
    float b = Distance(b1, b2, c1, c2);
    float c = Distance(c1, c2, a1, a2);
    printf("\nThe distance btw A & B is :%0.1f ", a);
    printf("\nThe distance btw B & C is :%0.1f.", b);
    printf("\nThe distance btw C & A is :%0.1f.", c);
    float area = Area(a, b, c);
    printf("\nThe Area of Triangle ABC is: %f.\n\n", area);
}

float Distance(int x1, int y1, int x2, int y2)
{
    int n1 = pow((x2 - x1) , 2 );
    int n2 = pow((y2 - y1) , 2 );
    float d = sqrt(n1 + n2);
    return d;
}

float Area(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    float ar = sqrt( (s * (s - a) * (s - b) * (s - c)) );
    return (ar);
}