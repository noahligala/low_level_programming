#include "main.h"

/**
 * puts2 - function to print every other character
 *
 * @str: function parameter
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
