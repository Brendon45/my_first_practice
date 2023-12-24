#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description- Program that prints memory address
* Return: 0 (Success)
*/

int main()
{
    int *number;

    number = malloc(sizeof(int));

    printf("%d\n", *number);
    
    free(number); /* Free the memory allocated to number */
    
    return (0);
}
