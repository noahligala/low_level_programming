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
	int l;
	int z;

	for (i = 0 ; 1 < 10 ; i++)
		for (j = 0 ; j <10 ; j++)
		{
			k = i * j;
			if (k > 9)
			{
				l = k / 10;
				z = k % 10;
				_putchar(l + '0');
				_putchar(z + '0');
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
