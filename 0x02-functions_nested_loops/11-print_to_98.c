#include <stdio.h>

/**
* print_to_98 - displays numbers
*
* @n: integer
*
* Return: void
*/


void print_to_98(int n)
{

	int start;

	if (n <= 98)
	{
		for (start = n; start < 98; start++)
		{
			printf("%d, ", start);
		}
	}
	else
	{
		for (start = n; start > 98; start--)
		{
			if (start == 98)
			{
				printf("%d", start);
				continue;
			}
			printf("%d, ", start);
		}
	}
	printf("%d\n", start);
}

