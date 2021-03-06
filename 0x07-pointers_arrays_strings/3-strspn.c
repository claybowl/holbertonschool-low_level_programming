#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containg charactes to match
 * Return: the number of bytes in the intinitial segment of s (cont'd below)
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int j;
char *e;

for (j = 0; *s; s++, j++)
{
for (e = accept; *e && *e != *s; e++)
;
if (!*e)
break;
}
return (j);
}
