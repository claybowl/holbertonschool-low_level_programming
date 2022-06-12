#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: a string to be checked
 * @c: a character to be located
 * Return: a pointer to the first occurence of c in s or NULL if not found
 */

char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
