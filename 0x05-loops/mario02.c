#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int height;

	do {
		printf("Enter the height\n");
		scanf("%d", &height);
	} while (height < 0 || height > 15);

	for (int lines = 0; lines < height; lines++)
	{
		for (int spaces = height - lines; spaces > 1; spaces--)
		{
			printf(" ");
		}
		for (int hashes = 0; hashes <= lines; hashes++)
		{
			printf("#");
		}
		printf("\n");
	}

	return (0);
}
