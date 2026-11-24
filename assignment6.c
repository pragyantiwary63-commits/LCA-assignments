/* Assignment 6: factorial with and without recursion */
#include <stdio.h>

unsigned long long fact_loop(int n)
{
    unsigned long long f = 1;
    int i;
    for (i = 2; i <= n; i++)
        f = f * i;
    return f;
}

unsigned long long fact_rec(int n)
{
    if (n <= 1)
        return 1;
    return n * fact_rec(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20)
    {
        printf("Enter a number from 0 to 20\n");
        return 1;
    }

    printf("Factorial without recursion = %llu\n", fact_loop(n));
    printf("Factorial with recursion    = %llu\n", fact_rec(n));
    return 0;
}
