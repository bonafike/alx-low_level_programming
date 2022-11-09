#include "main.h"
/**
 * _strcpy - function that copies the string pointed
 *
 * Description: a function that copies the string pointed
 *
 * @dest: input
 * @src: input
 * Return: value
 */
char *_strcpy(char *dest, char *src)
{
int l = 0;
int i;

while (src[l] != '\0')
{
l++;
}
for (i = 0; i <= l; i++)
{
dest[i] = src[i];
}
return (dest);
}
