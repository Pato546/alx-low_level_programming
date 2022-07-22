#include <stdio.h>

/**
* find_sqrt - f...
* @num: int
* @guess: int
* Return: int
*/

int find_sqrt(int num, int guess)
{
	if (guess == num / guess)
	{
		return (guess);
	}

	if (guess > num / guess)
	{
		return (-1);
	}

	return (find_sqrt(num, guess + 1));
}

/**
* _sqrt_recursion - find square root of a number
* @n: int
* Return: int
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (find_sqrt(n, 0));
}
