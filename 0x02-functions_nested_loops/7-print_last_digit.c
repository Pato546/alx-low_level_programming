#include "main.h"

/**
* print_last_digit - Display alphabets
*
* @c: number
*
* Return: int
*/

int print_last_digit(int c)
{
	char last_digit;

	if (c < 0)
	{
		c *= -1;
	}

	last_digit = c % 10;

	_putchar(last_digit);

	return (last_digit);
}

