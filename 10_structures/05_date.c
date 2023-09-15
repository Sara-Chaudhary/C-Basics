#include <stdio.h>
typedef struct date
{
    int month, year, d;
} date;
void Comp(date a, date b);
int main()
{
    date n[2];
    for (int i = 0; i < 2; i++)
    {
        printf("\nFor date %d:\n", i + 1);
        printf("Enter the year(yyyyy): ");
        scanf("%d", &n[i].year);
        printf("Enter the month(mm): ");
        scanf("%d", &n[i].month);
        printf("Enter the date(dd): ");
        scanf("%d", &n[i].d);
    }
    Comp(n[0], n[1]);
    return 0;
}
void Comp(date a, date b)
{
    if (a.year > b.year)
    {
        printf("\n%d/%d/%d is older out of the two \n", b.d, b.month, b.year);
    }
    else if (a.month > b.month)
    {
        printf("\n%d/%d/%d is older out of the two \n", b.d, b.month, b.year);
    }
    else if (a.d > b.d)
    {
        printf("\n%d/%d/%d is older out of the two \n", b.d, b.month, b.year);
    }
    else
    {
        printf("\n%d/%d/%d is older out of the two \n", a.d, a.month, a.year);
    }
}