#include "main.h"
/**
 * rev_string - reverses a string
 * @s: a string
 * return: is void
 */
void rev_string(char *s)
{
	int length = 0;
	int f1;
	int f2;
	int f3;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	f2 = length;

	for (f1 = 0; f1 < f2; f1++)
	{
		f2 = length - f1;
		f3 = s[f1];
		s[f1] = s[f2];
		s[f2] = f3;
	}

}
