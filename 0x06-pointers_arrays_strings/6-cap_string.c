#include "holberton.h"

/**
* cap_string - capitalizes all words of a string
*
* @x: string variable
*
* Return: a string with all characters capitalized.
*/
char *cap_string(char *x)
{
	int c = 0;

	while (x[c] != '\0')
	{
		if (x[c] >= 'a' && x[c] <= 'z')
		{
			x[c] = x[c] - 32;
		}
		c++;
	}
	return (x);
}
