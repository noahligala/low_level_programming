#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (k = 0 ; k < 10 ; k++)
		for(l = 0 ; l < 10 ; l++)
		{
			for (i = 0 ; i < 10 ; i++)
				for (j = 0 ; j <10 ; j++)
					if (i < j || k < l) 
					{	
						putchar(k + '0');
                       				putchar(l + '0');
                       				putchar(' ');
						putchar(i + '0');
						putchar(j + '0');
					{		putchar(',');
						putchar(' ');
					}
					}
		}
	putchar('\n');
	return (0);
}
