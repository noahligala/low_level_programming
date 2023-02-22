#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	unsigned long int n3;
	unsigned long int count;

	printf("%lu", n1);
	printf(",");
	printf(" ");
	printf("%lu", n2);
	printf(",");
	printf(" ");
	for (count = 3 ; count <= 99 ; count++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		n1 = n2;
		n2 = n3;
	if (count != 99)
	{
		printf(",");
		printf(" ");
	}
	else
		printf("\n");
	}
	return (0);
}
