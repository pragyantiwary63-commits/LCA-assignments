/* Assignment 5: menu driven program for string operations (built-in functions) */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s1[100], s2[100], temp[100];
    int choice, i;

    printf("Enter first string: ");
    scanf("%99s", s1);
    printf("Enter second string: ");
    scanf("%99s", s2);

    do
    {
        printf("\n--- String Operations ---\n");
        printf("1. Length\n2. Copy\n3. Concatenate\n4. Compare\n");
        printf("5. Reverse\n6. Uppercase\n7. Lowercase\n8. Search character\n9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Length of \"%s\" is %d\n", s1, (int)strlen(s1));
                break;
            case 2:
                strcpy(temp, s1);
                printf("Copied string: %s\n", temp);
                break;
            case 3:
                if (strlen(s1) + strlen(s2) >= sizeof(temp))
                {
                    printf("Result too long\n");
                    break;
                }
                strcpy(temp, s1);
                strcat(temp, s2);
                printf("Concatenated string: %s\n", temp);
                break;
            case 4:
                if (strcmp(s1, s2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;
            case 5:
                strcpy(temp, s1);
                for (i = 0; i < (int)strlen(temp) / 2; i++)
                {
                    char t = temp[i];
                    temp[i] = temp[strlen(temp) - 1 - i];
                    temp[strlen(temp) - 1 - i] = t;
                }
                printf("Reversed string: %s\n", temp);
                break;
            case 6:
                strcpy(temp, s1);
                for (i = 0; temp[i] != '\0'; i++)
                    temp[i] = toupper((unsigned char)temp[i]);
                printf("Uppercase: %s\n", temp);
                break;
            case 7:
                strcpy(temp, s1);
                for (i = 0; temp[i] != '\0'; i++)
                    temp[i] = tolower((unsigned char)temp[i]);
                printf("Lowercase: %s\n", temp);
                break;
            case 8:
            {
                char ch, *p;
                printf("Enter character to search in first string: ");
                scanf(" %c", &ch);
                p = strchr(s1, ch);
                if (p)
                    printf("'%c' found at position %d\n", ch, (int)(p - s1) + 1);
                else
                    printf("'%c' not found\n", ch);
                break;
            }
            case 9:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 9);

    return 0;
}
