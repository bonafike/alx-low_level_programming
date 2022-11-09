#include "main.h"
#include <stdio.h>

/**
 * _abs - compute
 *
 * @n: the integer to be printed
 *
 * Description: prints absolute value
 *
 * Return: always 0
 */

int _abs(int n)
{

if (n < 0)
{
return (n * (-1));
}

else if (n == 0)
{
return (0);
}

else
{
return (n);
}

}
