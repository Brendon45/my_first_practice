#include <stdio.h>
#include <cs50.h>


/**
 * main - Program prints a matrix of size n by n
 *
 * This program prompts the user to enter the number of rows and columns
 * for a matrix, then prints a matrix of asterisks (*) with the specified
 * number of rows and columns.
 *
 * Return: On success - (0)
 */

int main(void)
{
    // Declare variables for rows and columns
    int rows, col;

    // Prompt the user to enter the number of rows and columns
    rows = get_int("Rows: ");
    col = get_int("Columns: ");

    // Loop through each row
    for (int i = 1; i <= rows; i++)
    {
        // Loop through each column
        for (int j = 1; j <= col; j++)
        {
            // Print an asterisk for each column
            printf("*");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return (0);
}
