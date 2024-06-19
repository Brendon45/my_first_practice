#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * isPalindrome - Checks if a number is a palindrome
 *
 * @x: the number to be checked.
 * Return: Return true or false
 */

bool isPalindrome(int x)
{
	int i;
	/* Max length of an integer is 11 digits*/
	char str[12];

	/* handle case when x is a negative*/
	if (x < 0)
	{
		return (false);
	}

	/* convert integer to string */
	sprintf(str, "%d", x);
	int len = strlen(str);

	/* iterate through string, comparing characters*/
	for (i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - i - 1])
		{
			return (false);
		}
	}

	/* If we have not returned false by now, then x is a palindrome*/
	return (true);
}