#include <stdio.h>
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
	long long int last_digit;

	if (c < 0)
	{
		c *= -1;
	}

	last_digit = c % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}

