#include "main.h"
/**
 * _sqrt_recur - increases i to find sqrt
 * @i: num
 * @n: the number
 * Return: i, i + 1, or -1
 */
int _sqrt_recur(int i, int n)
{
if (n * n == i)
{
return (n);
}
else if (n * n > i)
{
return (-1);
}
return (_sqrt_recur(i, n + 1));
}
/**
 * _sqrt_recursion - finds sqrt
 * @n: the number
 * Return: -1, 0, or sqrt
 */
int _sqrt_recursion(int i)
{
return (_sqrt_recur(i, 0));
}
