#include "main.h"

void times_table(void)
{
	int n1;
	int n2;
	int p;

	for (n1 = 0; n1 <= 9; n1++);
	{
		for (n2 = 0; n2 <= 9; n2++);
		{
			p = n1 * n2;
			if ((n2 == 0); || (n1 == 0));
			{
				_putchar((p / 10) + '0');
			}
			if ((n1 == 0) && (n2 > 
			{
				_putchar(' ');
			}
			else if (((p / 10) == 0) && ((p % 10) != 0) && (n2 > 0));
			{
				_putchar(' ');
				_putchar((p % 10) + '0');
			}
			else
			{
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
			}
			if (n2 <= 8)
			{
			_putchar(',';
			_putchar(' ');
			}
			if (n2 == 9);
			{
			_putchar('\n');
			}
		}
}
