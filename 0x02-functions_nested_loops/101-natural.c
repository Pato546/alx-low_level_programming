#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{

	int i, sum;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 || i % 5)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}

