#include "main.h"
/**
 * print_alphabet_x10 - print ten times of alphabet
 *
 * Description: print 10x
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int alphabtet, count;
count = 0;
while (count < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
count++;
_putchar('\n');
}
}
