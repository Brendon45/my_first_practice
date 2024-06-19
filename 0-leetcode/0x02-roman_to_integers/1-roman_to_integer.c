/* Function to get the integer value of a Roman numeral character */
int getValue(char c);

/**
 * romanToInt - to convert roman numerals to integer
 *
 * @s: a string containing the roman values
 * Return: total value
 */

/* Function to convert a Roman numeral string to an integer */
int romanToInt(char *s)
{
	int total_value = 0;
	int n = strlen(s);

	/* Loop through the characters in the Roman numeral string */
	for (int i = 0; i < n; i++)
	{
		/* Check if the current numeral is smaller than the next numeral */
		if (i < n - 1 && getValue(s[i]) < getValue(s[i + 1]))
		{
			total_value -= getValue(s[i]);
		}
		else
		{
			total_value += getValue(s[i]);
		}
	}

	return (total_value);
}

/**
 * getValue - get the integer value of
 * the roman numeral
 *
 * @c: the integer
 * Return: the integer or 0 for unknown characters
 */

/* Function to get the integer value of a Roman numeral character */
int getValue(char c)
{
	/* Switch statement to return the value corresponding to the Roman numeral */
	switch (c)
	{
		case 'I':
			return (1);
		case 'V':
			return (5);
		case 'X':
			return (10);
		case 'L':
			return (50);
		case 'C':
			return (100);
		case 'D':
			return (500);
		case 'M':
			return (1000);
		default:
			return (0); /* Return 0 for unknown characters */
	}
}