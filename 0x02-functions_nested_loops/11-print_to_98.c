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
			_putchar('0' + start);
		}
	}
	else
	{
		for (start = n; start >= 98; start--)
		{
			_putchar('0' + start);
		}
	}

}

