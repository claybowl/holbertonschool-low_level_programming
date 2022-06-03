#include "main.h"

/**
* print_numbers - prints 0 through 9
* Return: return is void
*/

void print_numbers(void)
{
int j;

for (j = 0; j <= 9; j++)
{
_putchar(j + '0');
}
_putchar('\n');
}
