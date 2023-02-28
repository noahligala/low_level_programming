#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 *
 * @s: function parameter
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i = 0;
	int len;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = len; j--;)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
