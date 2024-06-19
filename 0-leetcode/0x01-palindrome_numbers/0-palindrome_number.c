/**
 * isPalindrome - chdeck if a number is a palindrome
 *
 * @x: the number to be checked
 * Return: true or fals
 */

bool isPalindrome(int x)
{
	int firstDigit;
	int lastDigit;

	/* handle case when x is a negative*/
	if (x < 0)
	{
		return (false);
	}

	/* extract the last digit*/
	lastDigit = x % 10;

	/* extract the first digit*/
	while (x >= 10)
	{
		x = x / 10;
	}
	firstDigit = x;

	/*compare the first and last digit*/
	if (firstDigit == lastDigit)
	{
		return (true);
	}
	else
	{
		return (false);
	}

}