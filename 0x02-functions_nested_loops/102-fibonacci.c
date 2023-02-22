#include <stdio.h>

int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int n3;
	int count;
	
	printf("1, 2, ");
	for (count = 3 ; count <= 50 ; count++)
	{
		n3 = n1 + n2;
		printf("%d", n3);
		printf(",");
		n1 = n2;
		n2 = n3;
	
	if (count != 50)
		printf(" ");
	else
		printf("\n");
	}
}
