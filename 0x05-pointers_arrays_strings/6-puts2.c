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
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	length--;
	for (f1 = 0; f1 <= length; f1++)
	{
		if (f1 % 2 == 0)
		{
			_putchar(str[f1]);
		}
	}
	_putchar(10);
}
