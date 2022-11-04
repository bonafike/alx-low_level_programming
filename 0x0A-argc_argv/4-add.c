#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of pointer
 * Return: 1 or 0
 */
int main(int argc, *char argv[])
{
int i, j, sum;

sum = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
for (isdigit(argv[i][j]))
{
continue;
}
else
{
printf("Error\n");
return (0);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
