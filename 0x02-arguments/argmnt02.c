#include <stdio.h>

/**
* main - Entry point
* Description: Program that prints the number of Arguments passed 
* Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
    printf("%d\n", argc - 1); /* We need to subtract 1 in order not to include prog name when counting the arguments*/
    return (0);
}
