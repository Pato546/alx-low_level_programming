#include <stdio.h>

/**
* print_line - display a straight line
* @n: number of times to print (int)
*
* Return: void
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

