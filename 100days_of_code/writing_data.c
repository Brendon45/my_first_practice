#include <stdio.h>
#include <stdlib.h>

/**
 * main - Demonstrates file operations in C.
 * 
 * - Opens a file for writing; if it does not exist, it creates the file.
 * - Prompts the user for text input and writes it to the file.
 * - Reopens the file for appending additional text and an integer.
 * - Handles errors in file operations and user input.
 * 
 * Return: 0 on success, or exits with an error code.
 */
int main(void)
{
    FILE *fptr, *appendptr;
    char ch[100];  // Increased buffer size for user input
    int number;

    /* Open file in writing mode; if no file, create new file */
    fptr = fopen("writing.txt", "w");
    if (fptr == NULL)
    {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }

    printf("Enter your text here: ");

    /* Taking input from stdin */
    if (fgets(ch, sizeof(ch), stdin) != NULL)
    {
        /* Writing the user input to the file */
        fputs(ch, fptr);
    }
    else
    {
        perror("Error reading input");
        fclose(fptr);  // Ensure the file is closed before exiting
        exit(EXIT_FAILURE);
    }

    fclose(fptr);

    /* Open file in append mode */
    appendptr = fopen("writing.txt", "a");
    if (appendptr == NULL)
    {
        perror("Error opening file for appending");
        exit(EXIT_FAILURE);
    }

    printf("Enter a line of text: ");
    if (fgets(ch, sizeof(ch), stdin) == NULL)
    {
        perror("Error reading input");
        fclose(appendptr);  // Ensure the file is closed before exiting
        exit(EXIT_FAILURE);
    }

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1)
    {
        perror("Invalid number format");
        fclose(appendptr);  // Ensure the file is closed before exiting
        exit(EXIT_FAILURE);
    }

    /* Clear the input buffer after reading an integer */
    while (getchar() != '\n'); // Clear remaining characters in the input buffer

    /* Write the entered text and number to the file */
    fprintf(appendptr, "%s %d\n", ch, number);

    /* Print the appended text and number to stdout */
    printf("Appended to file: %s %d\n", ch, number);

    /* Close the file */
    fclose(appendptr);

    return 0;
}
