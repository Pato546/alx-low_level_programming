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
	int last_digit;

	last_digit = c % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;	
	}

	_putchar('0' + last_digit);

	return (last_digit);
}

