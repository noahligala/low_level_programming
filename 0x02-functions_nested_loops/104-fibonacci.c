#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	long double n1 = 1;
	long double n2 = 2;
	long double n3;
	long double count;

	printf("%.0Lf", n1);
	printf(",");
	printf(" ");
	printf("%.0Lf", n2);
	printf(",");
	printf(" ");
	for (count = 3 ; count <= 98 ; count++)
	{
		n3 = n1 + n2;
		printf("%.0Lf", n3);
		n1 = n2;
		n2 = n3;
	if (count != 98)
	{
		printf(",");
		printf(" ");
	}
	else
		printf("\n");
	}
	return (0);
}
