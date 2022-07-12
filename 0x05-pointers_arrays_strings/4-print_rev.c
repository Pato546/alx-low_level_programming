#include "main.h"

/**
* print_rev - print string in reverse order;
* @s: pointer to string
*
* Return: int
*/

int print_rev(char *s)
{
	int str_len;

	str_len = 0;

	while (s[str_len] != '\0')
	{
		str_len++;
	}

	str_len -= 1;

	while (str_len != -1)
	{
		_putchar(s[str_len]);
		str_len -= 1;
	}

	_putchar('\n');

}

