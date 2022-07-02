#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char first_lwr, last_lwr;
	char first_upr, last_upr;

	last_lwr = 'z';
	last_upr = 'Z';

	for (first_lwr = 'a'; first_lwr <= last_lwr; first_lwr++)
	{
		putchar(first_lwr);
	}

	for (first_upr = 'A'; first_upr <= last_upr; first_upr++)
	{
		putchar(first_upr);
	}

	putchar('\n');

	return (0);
}

