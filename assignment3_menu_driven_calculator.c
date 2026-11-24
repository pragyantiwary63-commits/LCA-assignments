#include <stdio.h>

int main(void)
{
    int choice;
    double a, b;

    printf("===== MENU DRIVEN CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &a, &b) != 2)
    {
        printf("Invalid numbers.\n");
        return 1;
    }

    switch (choice)
    {
        case 1:
            printf("Result = %.2lf\n", a + b);
            break;

        case 2:
            printf("Result = %.2lf\n", a - b);
            break;

        case 3:
            printf("Result = %.2lf\n", a * b);
            break;

        case 4:
            if (b == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                printf("Result = %.2lf\n", a / b);
            }
            break;

        default:
            printf("Invalid choice. Please select 1 to 4.\n");
    }

    return 0;
}
