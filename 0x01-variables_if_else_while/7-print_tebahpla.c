#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char last_char;
	char first_char = 'a';

	for (last_char = 'z'; last_char >= first_char; last_char--)
	{
		putchar(last_char);
	}

	putchar('\n');

	return (0);
}

