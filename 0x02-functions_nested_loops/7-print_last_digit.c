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
	if (c < 0)
	{
		c *= -1;
	}
	return (c % 10);
}

