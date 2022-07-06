#include "main.h"

/**
* times_table - times
*
* Return: void
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int prod = i * j;

			if (prod > 9)
			{
				_putchar(prod / 10 + '0');
			}
			_putchar(prod % 10 + '0');

			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}


}

