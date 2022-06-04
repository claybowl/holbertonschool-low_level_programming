#include "main.h"

/**
* puts2 - prints every other character of a string
* starting with first character
* @str: string
* Return: void
*/

void puts2(char *str)
{
int f1;
int f2;

for (f2 = 0; str[f2] != '\0'; f2++)
{
	f2 -= 1;
	for (f1 = 0; f1 <= f2; f1++)
	{
		if (f1 % 2 == 0)
		{
			_putchar(str[f1]);
		}
_putchar('\n');
	}
}
}
