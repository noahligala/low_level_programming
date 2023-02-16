#include <stdio.h>

/**
 * main -this in the main function
 *
 * Return: always 0
 */
int main(void)
{
	printf("Size of a char: %zu, byte(s)", sizeof(char));
	printf("\nSize of an int: %zu byte(s)", sizeof(int));
	fprintf(stderr, "\nSize of a long int: %zu byte(s)", sizeof(long));
	printf("\nSize of a long long int: %zu byte(s)", sizeof(long long int));
	printf("\nSize of a float: %zu byte(s)", sizeof(float));
	return (0);
}
