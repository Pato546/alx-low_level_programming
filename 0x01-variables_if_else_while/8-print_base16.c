#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char first_num, last_num;
	char first_lwr, last_lwr;

	last_num = '9';
	last_lwr = 'f';

	for (first_num = '0'; first_num <= last_num; first_num++)
	{
		putchar(first_num);
	}

	for (first_lwr = 'a'; first_lwr <= last_lwr; first_lwr++)
	{
		putchar(first_lwr);
	}

	putchar('\n');

	return (0);
}

