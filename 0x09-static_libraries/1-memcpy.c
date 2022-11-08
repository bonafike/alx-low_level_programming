#include "main.h"
/**
 * _memcpy - copies from source to dest
 * @dest: destination
 * src: source
 * @n: n amount of times
 * Return: return to strings value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
