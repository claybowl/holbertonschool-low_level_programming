#include <stdio.h>

/**
 * main - prints alphabet, except q and e
 * in lowercase, followed by a new line
 * Description: prints alphabet except q and e
 * in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
