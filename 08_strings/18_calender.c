#include <stdio.h>
#include <string.h>
#include<time.h>



void PrintCalender(char *month, int year);
int LeapDays(int year);

int main()
{
    int year;
    char month[10];
    printf("Enter the month : ");
    scanf("%s", month);
    printf("Enter the year: ");
    scanf("%d", &year);
    PrintCalender(month, year);
    return 0;
}
void PrintCalender(char *month, int year)
{
    int leapDays = LeapDays(year);
    char *day[7] = {"mon  ", "tue  ", "wed  ", "thurs", "fri  ", "sat  ", "sun  "};
    printf("\nx-------------------------------------------------------x\n\t\t\t\b\b%s,%d\n\n", month, year);
    for (int i = 0; i < 7; i++)
    {
        printf("\t\b\b\b\b\b%s ", day[i]);
    }
    printf("\n");
}
int LeapDays(int year)
{
    if (year % 4 == 0)
    {
        return (((year - 1990) / 4) + 1);
    }
    else
    {
        return ((year - 1990) / 4);
    }
}
