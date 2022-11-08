#include "main.h"

/**
 * _memset - fills memory
 * @s: pointer to memory
 * @b: constant value
 * @n: number of bytes
 * Return: filled memory bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
int size = n;

if (size > 0)
{
int i;

for (i = 0; i < size; i++)
*(s + i) = b;
}
return (s);
}
