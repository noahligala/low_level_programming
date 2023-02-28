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
	int len;
	int j;

	i = 0;
	j = 0;
	len = 0;
	while (str[i] != '\0')
	{
		i++;
		len = len + i;
		while (j <= len)
		{
			_putchar(str[j]);
		}	
	}
	_putchar('\n');
}
