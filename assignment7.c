/* Assignment 7: student details using array of structures */
#include <stdio.h>

struct student
{
    int roll;
    char name[30];
    int m1, m2, m3;
    int total;
    float percentage;
};

int main()
{
    struct student s[50];
    int n, i;

    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 50)
    {
        printf("Number of students must be between 1 and 50\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter the roll number, name and marks of 3 subjects: ");
        scanf("%d %29s %d %d %d", &s[i].roll, s[i].name, &s[i].m1, &s[i].m2, &s[i].m3);
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percentage = s[i].total / 3.0;
    }

    printf("\n%-8s %-12s %-10s %-10s %-10s %-6s %s\n",
           "Roll No", "Name", "Subject:1", "Subject:2", "Subject:3", "Total", "Percentage");
    for (i = 0; i < n; i++)
        printf("%-8d %-12s %-10d %-10d %-10d %-6d %.2f\n",
               s[i].roll, s[i].name, s[i].m1, s[i].m2, s[i].m3, s[i].total, s[i].percentage);

    return 0;
}
