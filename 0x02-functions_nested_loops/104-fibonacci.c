#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long long int n1 = 1;
	unsigned long long int n2 = 2;
	unsigned long long int n3;
	unsigned long long int count;

	printf("%llu", n1);
	printf(",");
	printf(" ");
	printf("%llu", n2);
	printf(",");
	printf(" ");
	for (count = 3 ; count <= 98 ; count++)
	{
		n3 = n1 + n2;
		printf("%llu", n3);
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
