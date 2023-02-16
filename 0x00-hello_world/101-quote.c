#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", quote);
	return (0);
}
