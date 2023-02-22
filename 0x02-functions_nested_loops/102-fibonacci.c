#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	long int n3;
	long int count;

	printf("1, 2, ");
	for (count = 3 ; count <= 50 ; count++)
	{
		n3 = n1 + n2;
		printf("%ld", n3);
		n1 = n2;
		n2 = n3;

	if (count != 50)
	{
		printf(",");
		printf(" ");
	}
	else
		printf("\n");
	}
	return (0);
}
