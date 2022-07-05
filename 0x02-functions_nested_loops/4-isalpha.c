#include "main.h"

/**
* _isalpha - Checks if the input is a letter
*
* @c: alphabet
*
* Return: True or False
*/

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	return (0);
}

