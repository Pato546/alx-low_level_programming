#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int first_num, last_num;

	last_num = '9';

	for (first_num = '0'; first_num <= last_num; first_num++)
	{
		putchar(first_num);

		if (first_num != last_num)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

