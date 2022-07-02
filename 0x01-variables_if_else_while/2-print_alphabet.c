#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char first_char;
	char last_char = 'z';

	for (first_char = 'a'; first_char <= last_char; first_char++)
	{
		putchar(first_char);
	}

	putchar('\n');

	return (0);
}

