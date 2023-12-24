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
	int arr[] = {33, 55, 53, 31, 67, 89, 90, 32, 21};
	int i;

	for (i = 8; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return (0);
}
