#include "main.h"

/**
* puts2 - prints a string;
* @s: pointer to string
*
* Return: void
*/

void puts2(char *s)
{
	int counter;

	counter = 0;

	while (*s != '\0')
	{
		if (counter % 2 == 0)
		{
			_putchar(*s);
		}
		counter++;
		s++;
	}

	_putchar('\n');
}

