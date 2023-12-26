#include <stdio.h>

/**
 * main - Entry point
 * Description - A program that decrement from a given number to zero
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 9;

	while (i--)
	{
		if (i == 0)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d, ", i);
		}
	}
	printf("\n");

	return (0);
}
