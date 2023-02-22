#include <stdio.h>

/**
 * times_table - function displaying a times table
 *
 * Return: always 0
 */
int main(void)
{
        int i;
        int j;
        int k;

        for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j <10 ; j++)
                {
                        k = j * i;
			if (k > 9)
			{
				putchar(k / 10 + '0');
				putchar(k % 10 + '0');
			}
			else
				putchar(k + '0');
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}

                }
		putchar('\n');
	}
        putchar('\n');
	return (0);
}
