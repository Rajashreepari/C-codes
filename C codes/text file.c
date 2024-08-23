#include<stdio.h>
int main()
{
    FILE *fptr;
    char filename[100], line[1000];

    printf("Enter the name of the text file: ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");

    if (fptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Contents of the file '%s':\n", filename);
    while (fgets(line, sizeof(line), fptr) != NULL)
    {
        printf("%s", line);
    }

    fclose(fptr);

    return 0;
}
