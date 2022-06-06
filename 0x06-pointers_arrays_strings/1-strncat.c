#include "holberton.h"

/**
* _strncat - concatenates two strings
* @dest - destination string
* @src - source string
* Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int f1, f2;

	f1 = 0;
	f2 = 0;

	while (dest[f1] != '\0')
		f1++;

	while (src[f2] != '\0' && n--)
	{
		dest[f1] = src[f2];
		f2++;
		f1++;
	}

	dest[f1] = '\0';

	return (dest);
}
