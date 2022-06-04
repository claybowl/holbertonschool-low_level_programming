#include "main.h"

/**
* puts_half - prints half of a string
* followed by a new line
* @str: string
* Return: void
*/

void puts_half(char *str)
{
	int f1;
	int length = 0;
	int f2;

	while (str[length] != '\0')
	{
		length++;
	}

	length--;

	f2 = (length / 2) + 1;

	for (f1 = f2; f1 <= length; f1++)
	{
		_putchar(str[f1]);
	}
	_putchar(10);
}
