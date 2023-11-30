#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints the following numbers in reverse order:
 * 34 56 54 32 67 89 90 32 21
 * Assume that all these numbers are stored in an array
 * Return: 0 (Success)
 */

int main(void)
{
        int a = 10, b = 20;
        b += a++;
        printf("a is: %d\n", a);
        printf("a is: %d\n", b);
        return (0);
}
