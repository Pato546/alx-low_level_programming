#include "main.h"

/**
* print_numbers - Entry point
*
* Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int start;

	for (start = '0'; start <= '9'; start++)
	{
		_putchar(start);
	}
	_putchar('\n');
}

