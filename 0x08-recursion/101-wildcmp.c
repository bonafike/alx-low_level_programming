#include "main.h"
/**
 * wildcmp - checks two strings for match even if one is full of wildcards
 * @s1: one string
 * @s2: the string with *
 * Return: 1 if match, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
{
if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
return (0);
if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
return (1);
}
return (0);
}
