#include <stdio.h>

/**
 * main - Converts 24hr to 12hr notation
 *
 * This program takes a time input in 24-hour format and converts it into
 * 12-hour format.
 *
 * Return: On success - (0)
*/

int main(void)
{
    // Declare variables for hour and minute
    int hr, min;

    // Prompt the user to enter a time in 24-hour format
    printf("Enter a 24-hr time: ");
    // Read the input time from the user
    scanf("%d:%d", &hr, &min);

    // Check if the input hour is between 13 and 23 (indicating PM)
    if (hr >= 13 && hr <= 23)
        // If the hour is between 13 and 23, subtract 12 to convert to 12-hour format and print PM
        printf("Equivalent 12-hr time: %d:%d PM\n", (hr - 12), min);
    else
        // If the hour is between 0 and 12 (indicating AM), print AM directly
        printf("Equivalent 12-hour time: %d:%d AM\n", hr, min);

    return (0);
}
