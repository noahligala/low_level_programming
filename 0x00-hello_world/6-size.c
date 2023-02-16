#include <stdio.h>

/**
 * main -this in the main function
 *
 * Return: always 0
 */
int main(void)
{
	printf("Size of a char: %u, byte(s)", sizeof(char));
	printf("\nSize of an int: %u byte(s)", sizeof(int));
	printf("\nSize of a long int: %u byte(s)", sizeof(long));
	printf("\nSize of a long long int: %u byte(s)", sizeof(long long int));
	printf("\nSize of a float: %u byte(s)", sizeof(float));
	return (0);
}
