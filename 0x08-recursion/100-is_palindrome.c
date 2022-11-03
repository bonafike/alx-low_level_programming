#include "main.h"
/**
 * length - returns the length of a string
 * @s: the string
 * Return: int/ length of string
 */
int length(char *s)
{
if (*s != '\0')
{
return (1 + length(s + 1));
}
return (0);
}
/**
 * chekker - helper function
 * @s: string
 * @x: num
 * Return: output
 */
int chekker(char *s, int x)
{
if (x <= 0)
{
return (1);
}
if (*s == *(s + x - 1))
{
return (chekker(s + 1 , x -2));
}
else
{
return (0);
}
}
/**
 * is_palindrome - checking for palindrome
 * @s: the string
 * Return: 1 if true, 0 if not
 */
int is_palindrome(char *s)
{
int x = length(s);
return (chekker(s, x));
}
