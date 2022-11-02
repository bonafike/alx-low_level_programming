#include "main.h"
/**
 * _increasevar - increases i to find sqrt
 * @i: starts at 1
 * @n: the number
 * Return: i, i + 1, or -1
 */
int _increasevar(int i, int n)
{
if (i * i == n)
{
return (i);
}
else if (i * i > n)
{
return (-1);
}
if (i * i > n)
return (_sqrt_recur(n, x + 1));
}
/**
 * _sqrt_recursion - finds sqrt
 * @n: the number
 * Return: -1, 0, or sqrt
 */
int _sqrt_recursion(int n)
{
return (_sqrt_recur(n, 0));
}
