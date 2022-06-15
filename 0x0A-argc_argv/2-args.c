#include <stdio.h>

/**
* main - print arguments it recieves
* @argc: number count
* @argv: name
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
