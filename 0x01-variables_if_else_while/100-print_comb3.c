#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{

	int i, j, last_num;

	last_num = '9';

	for (i = '0'; i <= last_num; i++)
	{
		for (j = i + 1; j <= last_num; j++)
		{
			putchar(i);
			putchar(j);

			if ((i == '8') && (j == last_num))
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');


	return (0);
}

