/* Assignment 10: month-by-month calendar for a given year */
#include <stdio.h>
#include <time.h>

int is_leap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int days_in_month(int month, int year)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 1 && is_leap(year))
        return 29;
    return days[month];
}

/* day of week for the 1st of a month, 0 = Sunday */
int first_day(int month, int year)
{
    struct tm t = {0};
    t.tm_year = year - 1900;
    t.tm_mon = month;
    t.tm_mday = 1;
    t.tm_hour = 12;
    mktime(&t);
    return t.tm_wday;
}

int main()
{
    char *names[] = {"January", "February", "March", "April", "May", "June",
                     "July", "August", "September", "October", "November", "December"};
    int year, m, d, start, total;

    printf("Enter year: ");
    if (scanf("%d", &year) != 1 || year < 1900 || year > 9999)
    {
        printf("Enter a valid year (1900 to 9999)\n");
        return 1;
    }

    printf("\n      Calendar for %d\n", year);
    for (m = 0; m < 12; m++)
    {
        printf("\n   %s %d\n", names[m], year);
        printf(" Su Mo Tu We Th Fr Sa\n");

        start = first_day(m, year);
        total = days_in_month(m, year);

        for (d = 0; d < start; d++)
            printf("   ");
        for (d = 1; d <= total; d++)
        {
            printf("%3d", d);
            if ((start + d) % 7 == 0)
                printf("\n");
        }
        printf("\n");
    }
    return 0;
}
