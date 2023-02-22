#include "main.h"

/**
 * times_table - function displaying a times table
 *
 * Return: always 0
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; 1 < 10 ; i++)
		for (j = 0 ; j <10 ; j++)
		{
			k = i * j;
			if (k > 9)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
				_putchar(',');
			}
			else
			{
				_putchar(k + '0');
				_putchar(',');
			}
			if (k != 89)
				_putchar(' ');
		}
	_putchar('\n');
}
