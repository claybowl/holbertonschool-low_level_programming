#include "main.h"

/**
* _puts -  swaps the value of two integers
* @str: variable
* Return: returns 0.
*/
void _puts(char *str)
{
for (; *str;)
{
	_putchar(*str);
	str++;
}
_putchar(10);
}
