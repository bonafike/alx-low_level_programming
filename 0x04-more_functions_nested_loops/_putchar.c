#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character
 * @c: Character to print
 * Return: On success 1 or -1
 */
int _putchar(char c);
{
return (write(1, &c, 1));
}
