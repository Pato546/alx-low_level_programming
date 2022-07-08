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

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}

