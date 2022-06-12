#include "main.h"

/**
* _strlen -  swaps the value of two integers
* @s: variable
* Return: return length of string
*/
int _strlen(char *s)
{
	int length1;

	for (length1 = 0; *s != '\0'; s++)
	{
		length1++;
	}

	return (length1);
}
