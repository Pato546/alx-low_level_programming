#include <stdio.h>
#include "main.h"

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
		for (start = n; start <= 98; start++)
		{
			printf("%d, ", start);
		}
		_putchar('\n');
	}
	else
	{
		for (start = n; start >= 98; start--)
		{
			printf("%d, ", start);
		}
		_putchar('\n');
	}

}

