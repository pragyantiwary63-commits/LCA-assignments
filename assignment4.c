/* Assignment 4: addition of two matrices */
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    if (r < 1 || c < 1 || r > 10 || c > 10)
    {
        printf("Size must be between 1 and 10\n");
        return 1;
    }

    printf("Enter first matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Addition of two matrices is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}
