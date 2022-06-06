#include "holberton.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase
*
* @s: string
*
* Return: Always 0.
*/
char *string_toupper(char *f)
{
	int x;

	for (x = 0; f[x] != '\0'; x++)
	{
		if (f[x] >= 'a' && f[x] <= 'z')
		{
			f[x] = f[x] - 32;
		}
	}

	return (f);
}
