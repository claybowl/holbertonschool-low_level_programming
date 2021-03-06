#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: char pointer to address of name
 * @f: function pointer to function f
 * Return: void
 */


void print_name(char *name, void (*f)(char *))
{
	if (name && f)  /* protects function from NULL pointers */
	f(name);
}
