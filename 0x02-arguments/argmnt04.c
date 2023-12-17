#include <stdio.h>
#include <string.h>

/**
* main - Entry point
* Description: Program that convert number strings entered as arguments and add them
* Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
    int num1, num2, result = 1, i;

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    result = num1 * num2;

    printf("%d\n", result);
}
