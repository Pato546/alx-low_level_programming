#include "main.h"

/**
* _islower - Checks if a letter is lowercase
*
* @c: alphabet
*
* Return: True or False
*/

int _islower(int c)
{
	int a;

	a = c;

	if (a >= 97 && a <= 122)
	{
		return (1);
	}

	return (0);
}

