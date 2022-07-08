#include "main.h"

/**
* print_most_numbers - Entry point
*
* Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int start;

	for (start = '0'; start <= '9'; start++)
	{
		if (start == '2' || start == '4')
			continue;
		_putchar(start);
	}
	_putchar('\n');
}

