#include <stdio.h>

/**
* main - prints the number of arguments passed into it
* @argc: the size of the argv array
* @argv: an array containing a program command line argument
* Return: # of arguments passed to the program
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
