#include "holberton.h"

/**
* _strcmp - copies a string
* @dest: destination string
* @src: source strin
* @n: number of bites from src
* Return: a pointer to the resulting string dest
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
