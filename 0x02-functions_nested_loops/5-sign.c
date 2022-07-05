#include "main.h"

/**
* print_sign - Checks the sign of an integer
*
* @n: int
*
* Return: True or False
*/

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	_putchar('-');
	return (-1);
}

