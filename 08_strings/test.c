#include <stdio.h>
#include <time.h>

int main()
{ // Declare a tm struct to hold the date information
    struct tm date;
    // Initialize the date struct with the specific date you want to find the day for
    date.tm_year = 2023 - 1900; // Year - 1900 (2023 is represented as 123)
    date.tm_mon = 8 - 1;        // Month (January is 0, so August is 7 - 1)
    date.tm_mday = 1;           // Day of the month
    // Set other members of the struct to default values
    date.tm_hour = 0;
    date.tm_min = 0;
    date.tm_sec = 0;
    date.tm_isdst = -1;
    // Allow the function to determine whether daylight saving time is in effect
    // Convert the struct tm to time_t representation
        time_t time = mktime(&date);

    // Check if mktime failed (returns -1 on error)
        if (time == -1)
    {
        printf("Error: Invalid date!\n");
        return 1;
    }

    // Get the day of the week (0 - Sunday, 1 - Monday, ..., 6 - Saturday)
    int day_of_week = date.tm_wday;

    // Print the day of the week
    const char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("The day of the week on %d-%02d-%02d is %s.\n", date.tm_year + 1900, date.tm_mon + 1, date.tm_mday, days[day_of_week]);

    return 0;
}