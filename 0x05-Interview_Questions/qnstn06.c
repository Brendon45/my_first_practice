#include <stdio.h>

/**
* main - Entry point
* Question: What is the output of the following code
* Return: 0 (Success)
*/

int main(void)
{
	char c1 = 'a', c2 = 'b', c;

	c = c1 + c2;
	if (c > 'c')
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	return (0);
}
