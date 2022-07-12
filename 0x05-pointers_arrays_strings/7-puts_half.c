#include "main.h"

/**
* puts_half - print half of the string;
* @s: pointer to string
*
* Return: void
*/

void puts_half(char *s)
{
	int count, half_str, i;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	half_str = count % 2 == 0 ? count / 2 : (count - 1) / 2;

	for (i = half_str; i < count; i++)
	{
		_putchar(s[half_str]);
	}

	_putchar('\n');
}

