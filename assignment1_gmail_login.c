#include <stdio.h>
#include <string.h>

int main(void)
{
    char email[50];
    char password[50];

    /* Sample login details for this practice program */
    const char correctEmail[] = "student@gmail.com";
    const char correctPassword[] = "12345";

    printf("===== GMAIL LOGIN SIMULATION =====\n");

    printf("Enter Gmail ID: ");
    scanf("%49s", email);

    printf("Enter Password: ");
    scanf("%49s", password);

    if (strcmp(email, correctEmail) == 0 &&
        strcmp(password, correctPassword) == 0)
    {
        printf("\nLogin Successful!\n");
        printf("Welcome to Gmail.\n");
    }
    else
    {
        printf("\nInvalid Email or Password.\n");
    }

    return 0;
}
