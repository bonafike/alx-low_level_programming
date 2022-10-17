#include <stdio.h>
#include <unistd.h>

/**
 * main - prints and that part is useful
 *
 * Description: 'and that piece of art is useful" - Dora Korpar, 2015-10-19'
 *
 * Return: 1 (success)
 */

int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
