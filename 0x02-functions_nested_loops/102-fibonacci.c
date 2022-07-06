#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{

	int i;
	long int a, b, c;

	a = 1;
	b = 1;
	c = a + b;

	printf("%ld, %ld, ", b, c);

	for (i = 2; i < 50; i++)
	{
		a = b;
		b = c;
		c = a + b;

		if (i == 49)
		{
			printf("%ld", c);
		}
		else
		{
			printf("%ld, ", c);
		}
	}
	putchar('\n');

	return (0);
}

