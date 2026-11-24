/* Assignment 9: copy contents of one file to another */
#include <stdio.h>

int main()
{
    FILE *src, *dest;
    char srcname[100], destname[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%99s", srcname);
    printf("Enter destination file name: ");
    scanf("%99s", destname);

    src = fopen(srcname, "r");
    if (src == NULL)
    {
        printf("Cannot open file %s\n", srcname);
        return 1;
    }

    dest = fopen(destname, "w");
    if (dest == NULL)
    {
        printf("Cannot create file %s\n", destname);
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    printf("File copied successfully\n");
    return 0;
}
