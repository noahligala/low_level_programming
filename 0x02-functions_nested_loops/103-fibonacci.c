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
	long int sum = 0;

	for (count = 1 ; count <= 50 ; count++)
	{
		n3 = n1 + n2;
		if ((n3 % 2 == 0) && (n3 < 4000000))
			sum = sum + n3;
		n1 = n2;
		n2 = n3;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
