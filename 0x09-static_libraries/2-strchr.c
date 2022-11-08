#include "main.h"
/**
 * _strchr - locates character
 * @s: string to locate char
 * @c: character to find
 * Return: a pointer to the first occurrence
 *
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
if (s[i] == c)
return (s + i);
return (0);
}
