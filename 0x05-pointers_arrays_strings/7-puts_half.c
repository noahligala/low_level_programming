#include "main.h"

/**
 * puts_half - function to dusplay half of a string
 *
 * @str: function parameter
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i;
	int j;
	int len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = len / 2 ; j < len ; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
