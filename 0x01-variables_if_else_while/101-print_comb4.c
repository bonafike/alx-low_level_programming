#include <stdio.h>
/**
 * main - Different Combination Of Three Digits
 *
 * Return: Always (Success)
 */
int main(void)
{
int c, i, k;
for (c = '0'; c <= '9'; c++)
{
for (i = '0'; i <= '9'; i++)
{
for (k = '0'; k <= '9'; k++)
{
if (c < i && i < k)
{
purchar(c);
purchar(i);
purchar(k);
if (c != '7')
{
	putchar(',');
	putchar(' ');
}
}
}
}
}
putchar('\n')
return (0);
}
