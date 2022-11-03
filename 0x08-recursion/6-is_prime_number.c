#include "main.h"
/**
 * _is_prime_num - looks for prime
 * @n: the number
 * @i: the number
 * Return: output
 */
int _is_prime_num(int n, int i)
{
if (n <= 1 || (n != i && n % i == 0))
{
return (0);
}
else if (n == i)
{
return (1);
}
return (_is_prime_num(n, i + 1));
}
/**
 * is_prime_number - looks for prime
 * @n: the number
 * Return: 1 if orime, 0 if not
 */
int is_prime_number(int n)
{
return (_is_prime_num(n, 2));
}
