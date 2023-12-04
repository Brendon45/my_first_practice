#include <stdio.h>
/**
 * sum - Calculates the sum of two integers.
 *
 * @num1: The first integer.
 * @num2: The second integer.
 * Return: The sum of num1 and num2.
 */

int sum(int num1, int num2)
{
	int result = num1 + num2;

	return (result);
}
int main()
{
	// Example usage of the sum function
	int result = sum(3, 4);
	printf("Sum: %d\n", result);

	return 0;
}
