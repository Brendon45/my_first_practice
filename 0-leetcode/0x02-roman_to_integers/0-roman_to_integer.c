#include <string.h>

/**
 * romanToInt - convert numbers from
 * roman numerals to integers.
 *
 * @s: a string of the roman numerals
 * Return: the total value
 */

int romanToInt(char *s)
{
	int i = 0;
	int n = strlen(s); /* Calculate length of the string*/

	int current_value = 0;
	int next_value = 0;
	int total_value = 0;

	char current_char = s[i];
	char next_char = s[i + 1];

	/* Iterate through string*/
	while (i < (n - 1))
	{
		/* Compare s[i] and s[i+1]*/
		current_char = s[i];
		next_char = s[i + 1];

		current_value = 0;
		next_value = 0;

		switch (current_char)
		{
			case 'I':
				current_value = 1;
				break;
			case 'V':
				current_value = 5;
				break;
			case 'X':
				current_value = 10;
				break;
			case 'L':
				current_value = 50;
				break;
			case 'C':
				current_value = 100;
				break;
			case 'D':
				current_value = 500;
				break;
			case 'M':
				current_value = 1000;
				break;
		}

		switch (next_char)
		{
			case 'I':
				next_value = 1;
				break;
			case 'V':
				next_value = 5;
				break;
			case 'X':
				next_value = 10;
				break;
			case 'L':
				next_value = 50;
				break;
			case 'C':
				next_value = 100;
				break;
			case 'D':
				next_value = 500;
				break;
			case 'M':
				next_value = 1000;
				break;
		}

		if (current_value < next_value)
		{
			/* check for special cases (IV, IX, XL, XC, CD, CM)*/
			if ((current_char == 'I' && (next_char == 'V' || next_char == 'X')) ||
					(current_char == 'X' && (next_char == 'L' || next_char == 'C')) ||
					(current_char == 'C' && (next_char == 'D' || next_char == 'M')))
			{
				total_value -= current_value;
				total_value += next_value;
				i++; /* move the pointer forward an extra step*/
			}
			else
			{
				total_value += current_value;
			}
		}
		else
		{
			total_value += current_value;
		}

		i++;
	}

	/* Handle the last character*/
	total_value += s[n - 1] == 'I' ? 1 : 0; /* Add the value of the last character*/

	return (total_value);
}