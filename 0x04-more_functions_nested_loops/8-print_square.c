#include "main.h"

/**
* print_square - display a square
* @size: size of the square
*
* Return: void
*/

void print_square(int size)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

