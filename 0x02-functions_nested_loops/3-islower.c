#include "main.h"
/**
 * _islower - check lower case character
 *
 * @c: value to be checked
 *
 * Description: lower case
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}
else
{
return (0);
}
}
