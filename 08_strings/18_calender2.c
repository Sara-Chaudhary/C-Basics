#include <stdio.h>

int getDayOfWeek(int year, int month, int day)
{
    if (month < 3)
    {
        month += 12;
        year--;
    }

    int q = day;
    int m = month;
    int J = year / 100;
    int K = year % 100;

    int h = (q + (13 * (m + 1)) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;

    return h;
}

int main()
{
    int year ;
    int month ;
    int day = 1;
    printf("Enter the month(mm): ");
    scanf(" %d",&month );
    printf("Enter the year: ");
    scanf("%d", &year);

    char *daysOfWeek[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    int dayOfWeekIndex = getDayOfWeek(year, month, day);
    printf("The day of the week on %d/%d/%d was %s\n", day, month, year, daysOfWeek[dayOfWeekIndex]);

    return 0;
}