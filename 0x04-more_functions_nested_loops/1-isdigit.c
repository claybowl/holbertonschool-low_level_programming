#include "main.h"

/**
* _isdigit - checks if input is a digit
* @c: c is being tested if it is in a digit or not
* Return: return 0 for success
*
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
