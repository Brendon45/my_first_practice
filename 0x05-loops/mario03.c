#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int height, spaces, asterics, line;

	do {
		printf("Enter the height\n");
		scanf("%d", &height);
	} while (height < 0 || height > 20);

	for (line = 1; line <= height; line++)
	{
		for (spaces = height - 1; spaces >= line; spaces--)
		{
			printf(" ");
		}
		for (asterics = 1; asterics <= 2 * line - 1; asterics++)
		{
			printf("*");
		}
		printf("\n");

	}

	return (0);
}
